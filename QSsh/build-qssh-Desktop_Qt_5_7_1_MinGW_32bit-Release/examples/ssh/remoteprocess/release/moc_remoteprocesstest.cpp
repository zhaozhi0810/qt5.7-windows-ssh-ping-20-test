/****************************************************************************
** Meta object code from reading C++ file 'remoteprocesstest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QSsh-master/examples/ssh/remoteprocess/remoteprocesstest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remoteprocesstest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RemoteProcessTest_t {
    QByteArrayData data[13];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteProcessTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteProcessTest_t qt_meta_stringdata_RemoteProcessTest = {
    {
QT_MOC_LITERAL(0, 0, 17), // "RemoteProcessTest"
QT_MOC_LITERAL(1, 18, 21), // "handleConnectionError"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 20), // "handleProcessStarted"
QT_MOC_LITERAL(4, 62, 19), // "handleProcessStdout"
QT_MOC_LITERAL(5, 82, 19), // "handleProcessStderr"
QT_MOC_LITERAL(6, 102, 19), // "handleProcessClosed"
QT_MOC_LITERAL(7, 122, 10), // "exitStatus"
QT_MOC_LITERAL(8, 133, 13), // "handleTimeout"
QT_MOC_LITERAL(9, 147, 15), // "handleReadyRead"
QT_MOC_LITERAL(10, 163, 21), // "handleReadyReadStdout"
QT_MOC_LITERAL(11, 185, 21), // "handleReadyReadStderr"
QT_MOC_LITERAL(12, 207, 15) // "handleConnected"

    },
    "RemoteProcessTest\0handleConnectionError\0"
    "\0handleProcessStarted\0handleProcessStdout\0"
    "handleProcessStderr\0handleProcessClosed\0"
    "exitStatus\0handleTimeout\0handleReadyRead\0"
    "handleReadyReadStdout\0handleReadyReadStderr\0"
    "handleConnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteProcessTest[] = {

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
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RemoteProcessTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RemoteProcessTest *_t = static_cast<RemoteProcessTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleConnectionError(); break;
        case 1: _t->handleProcessStarted(); break;
        case 2: _t->handleProcessStdout(); break;
        case 3: _t->handleProcessStderr(); break;
        case 4: _t->handleProcessClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->handleTimeout(); break;
        case 6: _t->handleReadyRead(); break;
        case 7: _t->handleReadyReadStdout(); break;
        case 8: _t->handleReadyReadStderr(); break;
        case 9: _t->handleConnected(); break;
        default: ;
        }
    }
}

const QMetaObject RemoteProcessTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RemoteProcessTest.data,
      qt_meta_data_RemoteProcessTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RemoteProcessTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteProcessTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteProcessTest.stringdata0))
        return static_cast<void*>(const_cast< RemoteProcessTest*>(this));
    return QObject::qt_metacast(_clname);
}

int RemoteProcessTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
