/****************************************************************************
** Meta object code from reading C++ file 'hw3.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hw3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hw3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HW3_t {
    QByteArrayData data[10];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HW3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HW3_t qt_meta_stringdata_HW3 = {
    {
QT_MOC_LITERAL(0, 0, 3), // "HW3"
QT_MOC_LITERAL(1, 4, 11), // "sendProcImg"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 7), // "cv::Mat"
QT_MOC_LITERAL(4, 25, 3), // "img"
QT_MOC_LITERAL(5, 29, 8), // "getFrame"
QT_MOC_LITERAL(6, 38, 20), // "on_boxFilter_clicked"
QT_MOC_LITERAL(7, 59, 25), // "on_gaussianFilter_clicked"
QT_MOC_LITERAL(8, 85, 26), // "on_bilateralFilter_clicked"
QT_MOC_LITERAL(9, 112, 22) // "on_sobelFilter_clicked"

    },
    "HW3\0sendProcImg\0\0cv::Mat\0img\0getFrame\0"
    "on_boxFilter_clicked\0on_gaussianFilter_clicked\0"
    "on_bilateralFilter_clicked\0"
    "on_sobelFilter_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HW3[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   47,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HW3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HW3 *_t = static_cast<HW3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendProcImg((*reinterpret_cast< const cv::Mat(*)>(_a[1]))); break;
        case 1: _t->getFrame((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 2: _t->on_boxFilter_clicked(); break;
        case 3: _t->on_gaussianFilter_clicked(); break;
        case 4: _t->on_bilateralFilter_clicked(); break;
        case 5: _t->on_sobelFilter_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HW3::*_t)(const cv::Mat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HW3::sendProcImg)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject HW3::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_HW3.data,
      qt_meta_data_HW3,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HW3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HW3::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HW3.stringdata0))
        return static_cast<void*>(const_cast< HW3*>(this));
    return QDialog::qt_metacast(_clname);
}

int HW3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void HW3::sendProcImg(const cv::Mat & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
