/****************************************************************************
** Meta object code from reading C++ file 'sshdirecttcpiptunnel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QSsh-master/src/sshdirecttcpiptunnel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshdirecttcpiptunnel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSsh__Internal__SshDirectTcpIpTunnelPrivate_t {
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSsh__Internal__SshDirectTcpIpTunnelPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSsh__Internal__SshDirectTcpIpTunnelPrivate_t qt_meta_stringdata_QSsh__Internal__SshDirectTcpIpTunnelPrivate = {
    {
QT_MOC_LITERAL(0, 0, 43), // "QSsh::Internal::SshDirectTcpI..."
QT_MOC_LITERAL(1, 44, 11), // "initialized"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 9), // "readyRead"
QT_MOC_LITERAL(4, 67, 5), // "error"
QT_MOC_LITERAL(5, 73, 6), // "reason"
QT_MOC_LITERAL(6, 80, 6), // "closed"
QT_MOC_LITERAL(7, 87, 9) // "handleEof"

    },
    "QSsh::Internal::SshDirectTcpIpTunnelPrivate\0"
    "initialized\0\0readyRead\0error\0reason\0"
    "closed\0handleEof"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSsh__Internal__SshDirectTcpIpTunnelPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,
       6,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QSsh::Internal::SshDirectTcpIpTunnelPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SshDirectTcpIpTunnelPrivate *_t = static_cast<SshDirectTcpIpTunnelPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initialized(); break;
        case 1: _t->readyRead(); break;
        case 2: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->closed(); break;
        case 4: _t->handleEof(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SshDirectTcpIpTunnelPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SshDirectTcpIpTunnelPrivate::initialized)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SshDirectTcpIpTunnelPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SshDirectTcpIpTunnelPrivate::readyRead)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SshDirectTcpIpTunnelPrivate::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SshDirectTcpIpTunnelPrivate::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SshDirectTcpIpTunnelPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SshDirectTcpIpTunnelPrivate::closed)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QSsh::Internal::SshDirectTcpIpTunnelPrivate::staticMetaObject = {
    { &AbstractSshChannel::staticMetaObject, qt_meta_stringdata_QSsh__Internal__SshDirectTcpIpTunnelPrivate.data,
      qt_meta_data_QSsh__Internal__SshDirectTcpIpTunnelPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSsh::Internal::SshDirectTcpIpTunnelPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSsh::Internal::SshDirectTcpIpTunnelPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSsh__Internal__SshDirectTcpIpTunnelPrivate.stringdata0))
        return static_cast<void*>(const_cast< SshDirectTcpIpTunnelPrivate*>(this));
    return AbstractSshChannel::qt_metacast(_clname);
}

int QSsh::Internal::SshDirectTcpIpTunnelPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractSshChannel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QSsh::Internal::SshDirectTcpIpTunnelPrivate::initialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QSsh::Internal::SshDirectTcpIpTunnelPrivate::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QSsh::Internal::SshDirectTcpIpTunnelPrivate::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSsh::Internal::SshDirectTcpIpTunnelPrivate::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
