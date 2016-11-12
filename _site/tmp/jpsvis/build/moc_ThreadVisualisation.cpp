/****************************************************************************
** Meta object code from reading C++ file 'ThreadVisualisation.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/ThreadVisualisation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThreadVisualisation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ThreadVisualisation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   57,   62,   62, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   57,   62,   62, 0x0a,
      96,  120,   62,   62, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ThreadVisualisation[] = {
    "ThreadVisualisation\0"
    "signal_controlSequences(const char*)\0"
    "para\0\0slotControlSequence(const char*)\0"
    "slotSetFrameRate(float)\0fps\0"
};

void ThreadVisualisation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ThreadVisualisation *_t = static_cast<ThreadVisualisation *>(_o);
        switch (_id) {
        case 0: _t->signal_controlSequences((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 1: _t->slotControlSequence((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 2: _t->slotSetFrameRate((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ThreadVisualisation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ThreadVisualisation::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ThreadVisualisation,
      qt_meta_data_ThreadVisualisation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ThreadVisualisation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ThreadVisualisation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ThreadVisualisation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadVisualisation))
        return static_cast<void*>(const_cast< ThreadVisualisation*>(this));
    return QThread::qt_metacast(_clname);
}

int ThreadVisualisation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ThreadVisualisation::signal_controlSequences(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
