/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Wed 18. Aug 14:41:56 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,    8,    7,    7, 0x0a,
      50,   45,    7,    7, 0x0a,
      82,   73,    7,    7, 0x0a,
     122,  114,    7,    7, 0x0a,
     142,  114,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0connected\0changeBtConnectState(bool)\0"
    "text\0setOutputText(QString)\0errormsg\0"
    "displayConnectionError(QString)\0clicked\0"
    "tryConnection(bool)\0sendMessage(bool)\0"
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeBtConnectState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: setOutputText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: displayConnectionError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: tryConnection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: sendMessage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
