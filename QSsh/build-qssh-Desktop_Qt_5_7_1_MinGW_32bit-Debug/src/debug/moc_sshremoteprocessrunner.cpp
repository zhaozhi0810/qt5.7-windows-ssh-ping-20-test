/****************************************************************************
** Meta object code from reading C++ file 'sshremoteprocessrunner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QSsh-master/src/sshremoteprocessrunner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshremoteprocessrunner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSsh__SshRemoteProcessRunner_t {
    QByteArrayData data[17];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSsh__SshRemoteProcessRunner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSsh__SshRemoteProcessRunner_t qt_meta_stringdata_QSsh__SshRemoteProcessRunner = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QSsh::SshRemoteProcessRunner"
QT_MOC_LITERAL(1, 29, 15), // "connectionError"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "processStarted"
QT_MOC_LITERAL(4, 61, 23), // "readyReadStandardOutput"
QT_MOC_LITERAL(5, 85, 22), // "readyReadStandardError"
QT_MOC_LITERAL(6, 108, 13), // "processClosed"
QT_MOC_LITERAL(7, 122, 10), // "exitStatus"
QT_MOC_LITERAL(8, 133, 15), // "handleConnected"
QT_MOC_LITERAL(9, 149, 21), // "handleConnectionError"
QT_MOC_LITERAL(10, 171, 14), // "QSsh::SshError"
QT_MOC_LITERAL(11, 186, 5), // "error"
QT_MOC_LITERAL(12, 192, 18), // "handleDisconnected"
QT_MOC_LITERAL(13, 211, 20), // "handleProcessStarted"
QT_MOC_LITERAL(14, 232, 21), // "handleProcessFinished"
QT_MOC_LITERAL(15, 254, 12), // "handleStdout"
QT_MOC_LITERAL(16, 267, 12) // "handleStderr"

    },
    "QSsh::SshRemoteProcessRunner\0"
    "connectionError\0\0processStarted\0"
    "readyReadStandardOutput\0readyReadStandardError\0"
    "processClosed\0exitStatus\0handleConnected\0"
    "handleConnectionError\0QSsh::SshError\0"
    "error\0handleDisconnected\0handleProcessStarted\0"
    "handleProcessFinished\0handleStdout\0"
    "handleStderr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSsh__SshRemoteProcessRunner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   81,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QSsh::SshRemoteProcessRunner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SshRemoteProcessRunner *_t = static_cast<SshRemoteProcessRunner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionError(); break;
        case 1: _t->processStarted(); break;
        case 2: _t->readyReadStandardOutput(); break;
        case 3: _t->readyReadStandardError(); break;
        case 4: _t->processClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->handleConnected(); break;
        case 6: _t->handleConnectionError((*reinterpret_cast< QSsh::SshError(*)>(_a[1]))); break;
        case 7: _t->handleDisconnected(); break;
        case 8: _t->handleProcessStarted(); break;
        case 9: _t->handleProcessFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->handleStdout(); break;
        case 11: _t->handleStderr(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SshRemoteProcessRunner::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SshRemoteProcessRunner::connectionError)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SshRemoteProcessRunner::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SshRemoteProcessRunner::processStarted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SshRemoteProcessRunner::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SshRemoteProcessRunner::readyReadStandardOutput)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SshRemoteProcessRunner::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SshRemoteProcessRunner::readyReadStandardError)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SshRemoteProcessRunner::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SshRemoteProcessRunner::processClosed)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QSsh::SshRemoteProcessRunner::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSsh__SshRemoteProcessRunner.data,
      qt_meta_data_QSsh__SshRemoteProcessRunner,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSsh::SshRemoteProcessRunner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSsh::SshRemoteProcessRunner::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSsh__SshRemoteProcessRunner.stringdata0))
        return static_cast<void*>(const_cast< SshRemoteProcessRunner*>(this));
    return QObject::qt_metacast(_clname);
}

int QSsh::SshRemoteProcessRunner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QSsh::SshRemoteProcessRunner::connectionError()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QSsh::SshRemoteProcessRunner::processStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QSsh::SshRemoteProcessRunner::readyReadStandardOutput()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QSsh::SshRemoteProcessRunner::readyReadStandardError()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QSsh::SshRemoteProcessRunner::processClosed(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
