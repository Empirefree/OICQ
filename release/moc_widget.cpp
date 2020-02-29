/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[18];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 23), // "processPendingDatagrams"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "getFileName"
QT_MOC_LITERAL(4, 44, 18), // "on_sendBtn_clicked"
QT_MOC_LITERAL(5, 63, 19), // "on_sendTBtn_clicked"
QT_MOC_LITERAL(6, 83, 29), // "on_fontCbx_currentFontChanged"
QT_MOC_LITERAL(7, 113, 1), // "f"
QT_MOC_LITERAL(8, 115, 30), // "on_sizeCbx_currentIndexChanged"
QT_MOC_LITERAL(9, 146, 4), // "arg1"
QT_MOC_LITERAL(10, 151, 19), // "on_boldTBtn_clicked"
QT_MOC_LITERAL(11, 171, 7), // "checked"
QT_MOC_LITERAL(12, 179, 21), // "on_italicTBtn_clicked"
QT_MOC_LITERAL(13, 201, 24), // "on_underlineTBtn_clicked"
QT_MOC_LITERAL(14, 226, 20), // "on_colorTBtn_clicked"
QT_MOC_LITERAL(15, 247, 19), // "on_saveTBtn_clicked"
QT_MOC_LITERAL(16, 267, 20), // "on_clearTBtn_clicked"
QT_MOC_LITERAL(17, 288, 18) // "on_exitBtn_clicked"

    },
    "Widget\0processPendingDatagrams\0\0"
    "getFileName\0on_sendBtn_clicked\0"
    "on_sendTBtn_clicked\0on_fontCbx_currentFontChanged\0"
    "f\0on_sizeCbx_currentIndexChanged\0arg1\0"
    "on_boldTBtn_clicked\0checked\0"
    "on_italicTBtn_clicked\0on_underlineTBtn_clicked\0"
    "on_colorTBtn_clicked\0on_saveTBtn_clicked\0"
    "on_clearTBtn_clicked\0on_exitBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    1,   80,    2, 0x08 /* Private */,
       4,    0,   83,    2, 0x08 /* Private */,
       5,    0,   84,    2, 0x08 /* Private */,
       6,    1,   85,    2, 0x08 /* Private */,
       8,    1,   88,    2, 0x08 /* Private */,
      10,    1,   91,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      13,    1,   97,    2, 0x08 /* Private */,
      14,    0,  100,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QFont,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processPendingDatagrams(); break;
        case 1: _t->getFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_sendBtn_clicked(); break;
        case 3: _t->on_sendTBtn_clicked(); break;
        case 4: _t->on_fontCbx_currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 5: _t->on_sizeCbx_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_boldTBtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_italicTBtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_underlineTBtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_colorTBtn_clicked(); break;
        case 10: _t->on_saveTBtn_clicked(); break;
        case 11: _t->on_clearTBtn_clicked(); break;
        case 12: _t->on_exitBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
