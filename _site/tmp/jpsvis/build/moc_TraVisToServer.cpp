/****************************************************************************
** Meta object code from reading C++ file 'TraVisToServer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/network/TraVisToServer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TraVisToServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TraVisToServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   38,   38,   38, 0x08,
      39,   38,   38,   38, 0x08,
      57,   38,   38,   38, 0x08,
      80,  127,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TraVisToServer[] = {
    "TraVisToServer\0slotHandleConnection()\0"
    "\0slotReadMessage()\0slotConnectionClosed()\0"
    "slotDisplayError(QAbstractSocket::SocketError)\0"
    "socketError\0"
};

void TraVisToServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TraVisToServer *_t = static_cast<TraVisToServer *>(_o);
        switch (_id) {
        case 0: _t->slotHandleConnection(); break;
        case 1: _t->slotReadMessage(); break;
        case 2: _t->slotConnectionClosed(); break;
        case 3: _t->slotDisplayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TraVisToServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TraVisToServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TraVisToServer,
      qt_meta_data_TraVisToServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TraVisToServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TraVisToServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TraVisToServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TraVisToServer))
        return static_cast<void*>(const_cast< TraVisToServer*>(this));
    return QObject::qt_metacast(_clname);
}

int TraVisToServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
