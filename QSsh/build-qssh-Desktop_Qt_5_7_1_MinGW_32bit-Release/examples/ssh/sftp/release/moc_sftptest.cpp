/****************************************************************************
** Meta object code from reading C++ file 'sftptest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QSsh-master/examples/ssh/sftp/sftptest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sftptest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SftpTest_t {
    QByteArrayData data[16];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SftpTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SftpTest_t qt_meta_stringdata_SftpTest = {
    {
QT_MOC_LITERAL(0, 0, 8), // "SftpTest"
QT_MOC_LITERAL(1, 9, 15), // "handleConnected"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "handleError"
QT_MOC_LITERAL(4, 38, 18), // "handleDisconnected"
QT_MOC_LITERAL(5, 57, 24), // "handleChannelInitialized"
QT_MOC_LITERAL(6, 82, 34), // "handleChannelInitializationFa..."
QT_MOC_LITERAL(7, 117, 6), // "reason"
QT_MOC_LITERAL(8, 124, 17), // "handleJobFinished"
QT_MOC_LITERAL(9, 142, 15), // "QSsh::SftpJobId"
QT_MOC_LITERAL(10, 158, 3), // "job"
QT_MOC_LITERAL(11, 162, 5), // "error"
QT_MOC_LITERAL(12, 168, 14), // "handleFileInfo"
QT_MOC_LITERAL(13, 183, 25), // "QList<QSsh::SftpFileInfo>"
QT_MOC_LITERAL(14, 209, 12), // "fileInfoList"
QT_MOC_LITERAL(15, 222, 19) // "handleChannelClosed"

    },
    "SftpTest\0handleConnected\0\0handleError\0"
    "handleDisconnected\0handleChannelInitialized\0"
    "handleChannelInitializationFailure\0"
    "reason\0handleJobFinished\0QSsh::SftpJobId\0"
    "job\0error\0handleFileInfo\0"
    "QList<QSsh::SftpFileInfo>\0fileInfoList\0"
    "handleChannelClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SftpTest[] = {

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
       8,    2,   61,    2, 0x08 /* Private */,
      12,    2,   66,    2, 0x08 /* Private */,
      15,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,   11,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 13,   10,   14,
    QMetaType::Void,

       0        // eod
};

void SftpTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SftpTest *_t = static_cast<SftpTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleConnected(); break;
        case 1: _t->handleError(); break;
        case 2: _t->handleDisconnected(); break;
        case 3: _t->handleChannelInitialized(); break;
        case 4: _t->handleChannelInitializationFailure((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->handleJobFinished((*reinterpret_cast< QSsh::SftpJobId(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->handleFileInfo((*reinterpret_cast< QSsh::SftpJobId(*)>(_a[1])),(*reinterpret_cast< const QList<QSsh::SftpFileInfo>(*)>(_a[2]))); break;
        case 7: _t->handleChannelClosed(); break;
        default: ;
        }
    }
}

const QMetaObject SftpTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SftpTest.data,
      qt_meta_data_SftpTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SftpTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SftpTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SftpTest.stringdata0))
        return static_cast<void*>(const_cast< SftpTest*>(this));
    return QObject::qt_metacast(_clname);
}

int SftpTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
