/****************************************************************************
** Meta object code from reading C++ file 'Settings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../forms/Settings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Settings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   37,   37,   37, 0x0a,
      38,   37,   37,   37, 0x0a,
      64,   37,   37,   37, 0x0a,
      90,  124,   37,   37, 0x0a,
     130,   37,   37,   37, 0x0a,
     156,   37,   37,   37, 0x0a,
     178,   37,   37,   37, 0x0a,
     202,   37,   37,   37, 0x0a,
     233,   37,   37,   37, 0x0a,
     265,   37,   37,   37, 0x0a,
     300,   37,   37,   37, 0x0a,
     323,   37,   37,   37, 0x0a,
     352,  381,   37,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Settings[] = {
    "Settings\0slotChangePedestrianShape()\0"
    "\0slotUpdateTrailSettings()\0"
    "slotPickPedestrianColor()\0"
    "slotChangePedestrianColor(QColor)\0"
    "color\0slotChangeVerticesWidth()\0"
    "slotChangeOutputDir()\0slotChangeCaptionSize()\0"
    "slotChangeCaptionOrientation()\0"
    "slotChangeCaptionAutoRotation()\0"
    "slotChangePedestrianColorProfile()\0"
    "slotPickCaptionColor()\0"
    "slotChangeCaptionColorMode()\0"
    "slotControlSequence(QString)\0msg\0"
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Settings *_t = static_cast<Settings *>(_o);
        switch (_id) {
        case 0: _t->slotChangePedestrianShape(); break;
        case 1: _t->slotUpdateTrailSettings(); break;
        case 2: _t->slotPickPedestrianColor(); break;
        case 3: _t->slotChangePedestrianColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->slotChangeVerticesWidth(); break;
        case 5: _t->slotChangeOutputDir(); break;
        case 6: _t->slotChangeCaptionSize(); break;
        case 7: _t->slotChangeCaptionOrientation(); break;
        case 8: _t->slotChangeCaptionAutoRotation(); break;
        case 9: _t->slotChangePedestrianColorProfile(); break;
        case 10: _t->slotPickCaptionColor(); break;
        case 11: _t->slotChangeCaptionColorMode(); break;
        case 12: _t->slotControlSequence((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Settings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Settings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Settings,
      qt_meta_data_Settings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Settings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Settings))
        return static_cast<void*>(const_cast< Settings*>(this));
    return QWidget::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
