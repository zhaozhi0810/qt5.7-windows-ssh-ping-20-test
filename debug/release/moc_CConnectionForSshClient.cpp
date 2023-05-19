/****************************************************************************
** Meta object code from reading C++ file 'CConnectionForSshClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QSshTest/QSshTest/CConnectionForSshClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CConnectionForSshClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CConnectionForSshClient_t {
    QByteArrayData data[27];
    char stringdata0[368];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CConnectionForSshClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CConnectionForSshClient_t qt_meta_stringdata_CConnectionForSshClient = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CConnectionForSshClient"
QT_MOC_LITERAL(1, 24, 15), // "sigInitForClild"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 22), // "sigConnectStateChanged"
QT_MOC_LITERAL(4, 64, 6), // "bState"
QT_MOC_LITERAL(5, 71, 5), // "index"
QT_MOC_LITERAL(6, 77, 5), // "strIp"
QT_MOC_LITERAL(7, 83, 5), // "nPort"
QT_MOC_LITERAL(8, 89, 14), // "sigDataArrived"
QT_MOC_LITERAL(9, 104, 6), // "strMsg"
QT_MOC_LITERAL(10, 111, 19), // "slotResetConnection"
QT_MOC_LITERAL(11, 131, 9), // "strIpPort"
QT_MOC_LITERAL(12, 141, 8), // "slotSend"
QT_MOC_LITERAL(13, 150, 10), // "strMessage"
QT_MOC_LITERAL(14, 161, 20), // "slotSendByQByteArray"
QT_MOC_LITERAL(15, 182, 6), // "arrMsg"
QT_MOC_LITERAL(16, 189, 16), // "slotDisconnected"
QT_MOC_LITERAL(17, 206, 16), // "slotDataReceived"
QT_MOC_LITERAL(18, 223, 16), // "slotInitForClild"
QT_MOC_LITERAL(19, 240, 20), // "slotCreateConnection"
QT_MOC_LITERAL(20, 261, 13), // "slotConnected"
QT_MOC_LITERAL(21, 275, 18), // "slotThreadFinished"
QT_MOC_LITERAL(22, 294, 19), // "slotSshConnectError"
QT_MOC_LITERAL(23, 314, 14), // "QSsh::SshError"
QT_MOC_LITERAL(24, 329, 8), // "sshError"
QT_MOC_LITERAL(25, 338, 14), // "slotShellStart"
QT_MOC_LITERAL(26, 353, 14) // "slotShellError"

    },
    "CConnectionForSshClient\0sigInitForClild\0"
    "\0sigConnectStateChanged\0bState\0index\0"
    "strIp\0nPort\0sigDataArrived\0strMsg\0"
    "slotResetConnection\0strIpPort\0slotSend\0"
    "strMessage\0slotSendByQByteArray\0arrMsg\0"
    "slotDisconnected\0slotDataReceived\0"
    "slotInitForClild\0slotCreateConnection\0"
    "slotConnected\0slotThreadFinished\0"
    "slotSshConnectError\0QSsh::SshError\0"
    "sshError\0slotShellStart\0slotShellError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CConnectionForSshClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    4,   95,    2, 0x06 /* Public */,
       8,    4,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  113,    2, 0x0a /* Public */,
      12,    2,  116,    2, 0x0a /* Public */,
      12,    2,  121,    2, 0x0a /* Public */,
      14,    2,  126,    2, 0x0a /* Public */,
      16,    1,  131,    2, 0x0a /* Public */,
      17,    0,  134,    2, 0x0a /* Public */,
      18,    0,  135,    2, 0x08 /* Private */,
      19,    0,  136,    2, 0x08 /* Private */,
      20,    0,  137,    2, 0x08 /* Private */,
      21,    0,  138,    2, 0x08 /* Private */,
      22,    1,  139,    2, 0x08 /* Private */,
      25,    0,  142,    2, 0x08 /* Private */,
      26,    0,  143,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::QString, QMetaType::Int,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::Int,    9,    5,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   11,   15,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CConnectionForSshClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CConnectionForSshClient *_t = static_cast<CConnectionForSshClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigInitForClild(); break;
        case 1: _t->sigConnectStateChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->sigDataArrived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->slotResetConnection((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->slotSend((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->slotSend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->slotSendByQByteArray((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 7: _t->slotDisconnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slotDataReceived(); break;
        case 9: _t->slotInitForClild(); break;
        case 10: _t->slotCreateConnection(); break;
        case 11: _t->slotConnected(); break;
        case 12: _t->slotThreadFinished(); break;
        case 13: _t->slotSshConnectError((*reinterpret_cast< QSsh::SshError(*)>(_a[1]))); break;
        case 14: _t->slotShellStart(); break;
        case 15: _t->slotShellError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CConnectionForSshClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CConnectionForSshClient::sigInitForClild)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CConnectionForSshClient::*_t)(bool , int , QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CConnectionForSshClient::sigConnectStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CConnectionForSshClient::*_t)(QString , int , QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CConnectionForSshClient::sigDataArrived)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject CConnectionForSshClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CConnectionForSshClient.data,
      qt_meta_data_CConnectionForSshClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CConnectionForSshClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CConnectionForSshClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CConnectionForSshClient.stringdata0))
        return static_cast<void*>(const_cast< CConnectionForSshClient*>(this));
    return QObject::qt_metacast(_clname);
}

int CConnectionForSshClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void CConnectionForSshClient::sigInitForClild()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CConnectionForSshClient::sigConnectStateChanged(bool _t1, int _t2, QString _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CConnectionForSshClient::sigDataArrived(QString _t1, int _t2, QString _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
