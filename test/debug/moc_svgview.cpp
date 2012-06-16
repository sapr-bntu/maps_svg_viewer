/****************************************************************************
** Meta object code from reading C++ file 'svgview.h'
**
** Created: Fri 15. Jun 10:51:26 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../svgview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'svgview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SvgView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,    9,    8,    8, 0x0a,
      73,   66,    8,    8, 0x0a,
      97,   66,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SvgView[] = {
    "SvgView\0\0highQualityAntialiasing\0"
    "setHighQualityAntialiasing(bool)\0"
    "enable\0setViewBackground(bool)\0"
    "setViewOutline(bool)\0"
};

void SvgView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SvgView *_t = static_cast<SvgView *>(_o);
        switch (_id) {
        case 0: _t->setHighQualityAntialiasing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setViewBackground((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setViewOutline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SvgView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SvgView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_SvgView,
      qt_meta_data_SvgView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SvgView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SvgView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SvgView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SvgView))
        return static_cast<void*>(const_cast< SvgView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int SvgView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
