/****************************************************************************
** Meta object code from reading C++ file 'ParabolaWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/ParabolaWidget.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParabolaWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSParabolaWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSParabolaWidgetENDCLASS = QtMocHelpers::stringData(
    "ParabolaWidget",
    "QML.Element",
    "auto",
    "setDisplay",
    "",
    "minX",
    "maxX",
    "minY",
    "maxY",
    "updateDisplay"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSParabolaWidgetENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[15];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[11];
    char stringdata4[1];
    char stringdata5[5];
    char stringdata6[5];
    char stringdata7[5];
    char stringdata8[5];
    char stringdata9[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSParabolaWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSParabolaWidgetENDCLASS_t qt_meta_stringdata_CLASSParabolaWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "ParabolaWidget"
        QT_MOC_LITERAL(15, 11),  // "QML.Element"
        QT_MOC_LITERAL(27, 4),  // "auto"
        QT_MOC_LITERAL(32, 10),  // "setDisplay"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 4),  // "minX"
        QT_MOC_LITERAL(49, 4),  // "maxX"
        QT_MOC_LITERAL(54, 4),  // "minY"
        QT_MOC_LITERAL(59, 4),  // "maxY"
        QT_MOC_LITERAL(64, 13)   // "updateDisplay"
    },
    "ParabolaWidget",
    "QML.Element",
    "auto",
    "setDisplay",
    "",
    "minX",
    "maxX",
    "minY",
    "maxY",
    "updateDisplay"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSParabolaWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       1,   16, // methods
       4,   31, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    4,   22,    4, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00015103, uint(1879048201), 0,
       6, QMetaType::Int, 0x00015103, uint(1879048201), 0,
       7, QMetaType::Int, 0x00015103, uint(1879048201), 0,
       8, QMetaType::Int, 0x00015103, uint(1879048201), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ParabolaWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSParabolaWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSParabolaWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'minX'
        int,
        // property 'maxX'
        int,
        // property 'minY'
        int,
        // property 'maxY'
        int,
        // Q_OBJECT / Q_GADGET
        ParabolaWidget,
        // method 'setDisplay'
        void,
        int,
        int,
        int,
        int
    >,
    nullptr
} };

void ParabolaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParabolaWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setDisplay((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParabolaWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->minX(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maxX(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->minY(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->maxY(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ParabolaWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinX(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMaxX(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setMinY(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setMaxY(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ParabolaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParabolaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSParabolaWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ParabolaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
// If you get a compile error in this function it can be because either
//     a) You are using a NOTIFY signal that does not exist. Fix it.
//     b) You are using a NOTIFY signal that does exist (in a parent class) but has a non-empty parameter list. This is a moc limitation.
[[maybe_unused]] static void checkNotifySignalValidity_CLASSParabolaWidgetENDCLASS(ParabolaWidget *t) {
    t->updateDisplay();
}
QT_WARNING_POP
