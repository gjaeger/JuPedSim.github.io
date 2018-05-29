import re
import os
import sys

def clean_file(filename):
    f =  open(filename, "r")
    lines = f.readlines()
    print( "call clean_file with ", filename)
    add_line = 0  # condition when to start adding new lines
    newlines = [] # new lines will be written in filename

    for line in lines:
        # look for first appearance of "---"
        print ("<%s>"%line)
        if add_line !=2 and line.startswith("---"):
            add_line += 1
            print(add_line)
            continue # ignore this line

        if add_line == 2:
            # fix image urls. Replace "{{ base.url }}" with pwd.
            print( line)
            line = re.sub(r"\{\{\s* site.baseurl \s*\}\}", os.getcwd(), line)
            print( line)
            newlines.append(line)


    # write new content in file
    f = open(filename, "w")
    f.write("".join(newlines))
    f.close()


clean_file(sys.argv[1])
