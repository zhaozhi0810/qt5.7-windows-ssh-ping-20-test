/****************************************************************************
** Meta object code from reading C++ file 'tunnel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QSsh-master/examples/ssh/tunnel/tunnel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tunnel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tunnel_t {
    QByteArrayData data[13];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tunnel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tunnel_t qt_meta_stringdata_Tunnel = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Tunnel"
QT_MOC_LITERAL(1, 7, 15), // "handleConnected"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 21), // "handleConnectionError"
QT_MOC_LITERAL(4, 46, 16), // "handleServerData"
QT_MOC_LITERAL(5, 63, 17), // "handleInitialized"
QT_MOC_LITERAL(6, 81, 17), // "handleTunnelError"
QT_MOC_LITERAL(7, 99, 6), // "reason"
QT_MOC_LITERAL(8, 106, 18), // "handleTunnelClosed"
QT_MOC_LITERAL(9, 125, 19), // "handleNewConnection"
QT_MOC_LITERAL(10, 145, 17), // "handleSocketError"
QT_MOC_LITERAL(11, 163, 16), // "handleClientData"
QT_MOC_LITERAL(12, 180, 13) // "handleTimeout"

    },
    "Tunnel\0handleConnected\0\0handleConnectionError\0"
    "handleServerData\0handleInitialized\0"
    "handleTunnelError\0reason\0handleTunnelClosed\0"
    "handleNewConnection\0handleSocketError\0"
    "handleClientData\0handleTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tunnel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Tunnel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tunnel *_t = static_cast<Tunnel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleConnected(); break;
        case 1: _t->handleConnectionError(); break;
        case 2: _t->handleServerData(); break;
        case 3: _t->handleInitialized(); break;
        case 4: _t->handleTunnelError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->handleTunnelClosed(); break;
        case 6: _t->handleNewConnection(); break;
        case 7: _t->handleSocketError(); break;
        case 8: _t->handleClientData(); break;
        case 9: _t->handleTimeout(); break;
        default: ;
        }
    }
}

const QMetaObject Tunnel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tunnel.data,
      qt_meta_data_Tunnel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Tunnel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tunnel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Tunnel.stringdata0))
        return static_cast<void*>(const_cast< Tunnel*>(this));
    return QObject::qt_metacast(_clname);
}

int Tunnel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
