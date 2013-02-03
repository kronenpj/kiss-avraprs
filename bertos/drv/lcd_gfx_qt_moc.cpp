/****************************************************************************
** Meta object code from reading C++ file 'lcd_gfx_qt.h'
**
** Created: Thu Mar 1 22:22:23 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lcd_gfx_qt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lcd_gfx_qt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EmulLCD[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_EmulLCD[] = {
    "EmulLCD\0"
};

const QMetaObject EmulLCD::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_EmulLCD,
      qt_meta_data_EmulLCD, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EmulLCD::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EmulLCD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EmulLCD::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmulLCD))
        return static_cast<void*>(const_cast< EmulLCD*>(this));
    return QFrame::qt_metacast(_clname);
}

int EmulLCD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
