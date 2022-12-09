/****************************************************************************
** Meta object code from reading C++ file 'shell.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QSsh-master/examples/ssh/shell/shell.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shell.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Shell_t {
    QByteArrayData data[12];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Shell_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Shell_t qt_meta_stringdata_Shell = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Shell"
QT_MOC_LITERAL(1, 6, 15), // "handleConnected"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 21), // "handleConnectionError"
QT_MOC_LITERAL(4, 45, 18), // "handleRemoteStdout"
QT_MOC_LITERAL(5, 64, 18), // "handleRemoteStderr"
QT_MOC_LITERAL(6, 83, 18), // "handleShellMessage"
QT_MOC_LITERAL(7, 102, 7), // "message"
QT_MOC_LITERAL(8, 110, 19), // "handleChannelClosed"
QT_MOC_LITERAL(9, 130, 10), // "exitStatus"
QT_MOC_LITERAL(10, 141, 18), // "handleShellStarted"
QT_MOC_LITERAL(11, 160, 11) // "handleStdin"

    },
    "Shell\0handleConnected\0\0handleConnectionError\0"
    "handleRemoteStdout\0handleRemoteStderr\0"
    "handleShellMessage\0message\0"
    "handleChannelClosed\0exitStatus\0"
    "handleShellStarted\0handleStdin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Shell[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Shell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Shell *_t = static_cast<Shell *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleConnected(); break;
        case 1: _t->handleConnectionError(); break;
        case 2: _t->handleRemoteStdout(); break;
        case 3: _t->handleRemoteStderr(); break;
        case 4: _t->handleShellMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->handleChannelClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->handleShellStarted(); break;
        case 7: _t->handleStdin(); break;
        default: ;
        }
    }
}

const QMetaObject Shell::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Shell.data,
      qt_meta_data_Shell,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Shell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Shell::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Shell.stringdata0))
        return static_cast<void*>(const_cast< Shell*>(this));
    return QObject::qt_metacast(_clname);
}

int Shell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
