#======================================
# convert _posts/*.md to _tex/*.tex
# mkdir _tex/ if it does not exit.
# dependencies:
# - kramdown
# - latex
# - make
#======================================
import sys
import glob
import os
import re
import shlex
import subprocess
from shutil import copyfile

def clean_file(filename, img_dir):
    """
    Remove yaml header and fix path to images (remove {{ site.baseurl }})
    """

    f =  open(filename, "r")
    lines = f.readlines()
    if not lines:
        print("WARNING: can not read file ", filename)
        input("pause")

    add_line = 0  # condition when to start adding new lines
    newlines = [] # new lines will be written in filename

    for line in lines:
        # look for first and second appearance of "---"
        # ---
        # \end{itemize}
         # the last itemize  is stange indeed.
        if add_line == 0 and line.startswith("---"):
            add_line += 1
            continue # ignore this line

        if add_line == 1:
            add_line += 1
            continue # ignore following line.

        if add_line == 2:
            # fix image urls. Replace "{{ base.url }}" with pwd.
            line = re.sub(r"\{\{\s* site.baseurl \s*\}\}", img_dir, line)
            newlines.append(line)
            # gif --> png?

    # write new content in file
    f = open(filename, "w")
    f.write("".join(newlines))
    f.close()

def get_git_status():
    """
    Fetch information of the last git commit.
            :return: branch, author, date, commit of the newst commit(tuple)
    """
    # TODO

if __name__ == "__main__":
    if not os.path.exists("_tex"):
        os.makedirs("_tex")
        print("make _tex")

    for module in ["jpscore", "jpsreport"]:
        if not os.path.exists(os.path.join("_tex", module)):
            os.makedirs(os.path.join("_tex", module))
            print(os.path.join("_tex", module))

        markdown_files = glob.glob("../../%s/_posts/*.md" % module)
        img_dir = os.path.split(os.path.dirname(markdown_files[0]))[0]
        print("img_dir %s" % img_dir)

        for markdown_file in markdown_files:
            latex_file = os.path.join("_tex", module, os.path.basename(os.path.splitext(markdown_file)[0]) ) + ".tex"
            print("markdown_file %s " % markdown_file)
            print(">> %s" % latex_file)
            cmd = shlex.split("kramdown --input GFM %s --no-auto-ids --output latex" % markdown_file)
            # markdown to latex
            with open(latex_file, 'w') as fout:
                proc = subprocess.Popen(cmd, stdout=fout)

            proc.wait()
            # remove yaml-header from tex files and fix images
            clean_file(latex_file, img_dir)



    post_checkout = "../.git/hooks/post-checkout"
    if not os.path.exists(post_checkout):
        print("copy <post-checkout> to <../.git/hooks>")
        copyfile("../post-checkout", post_checkout)

    # make file executable
    print("change permission of <post-checkout>")
    os.chmod(post_checkout, 0o775)

    # remove old titlepage.tex
    if os.path.exists("./titlepage.tex"):
        print("remove titlepage")
        os.remove("./titlepage.tex")

    # create titlepage
    make_title_page = "git checkout master"
    res = subprocess.call(shlex.split(make_title_page))

    if not os.path.exists("./titlepage.tex"):
        sys.exit("could not find titlepage.tex. git checkout was not successful!")

    # process jupedsim.tex
    res = subprocess.call(shlex.split("make clean"))
    subprocess.call("make")
