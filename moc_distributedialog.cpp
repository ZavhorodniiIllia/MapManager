/****************************************************************************
** Meta object code from reading C++ file 'distributedialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "distributedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'distributedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DistributeDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      53,   17,   17,   17, 0x08,
      84,   17,   17,   17, 0x08,
     111,   17,   17,   17, 0x08,
     145,   17,   17,   17, 0x08,
     172,   17,   17,   17, 0x08,
     199,   17,   17,   17, 0x08,
     227,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DistributeDialog[] = {
    "DistributeDialog\0\0on_checkConnectionButton_clicked()\0"
    "on_loadButtonSurface_clicked()\0"
    "on_loadButtonAir_clicked()\0"
    "on_loadButtonSubSurface_clicked()\0"
    "on_loadButtonCMS_clicked()\0"
    "on_loadButtonAGM_clicked()\0"
    "on_loadButtonAGS1_clicked()\0"
    "on_loadButtonAGS2_clicked()\0"
};

void DistributeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DistributeDialog *_t = static_cast<DistributeDialog *>(_o);
        switch (_id) {
        case 0: _t->on_checkConnectionButton_clicked(); break;
        case 1: _t->on_loadButtonSurface_clicked(); break;
        case 2: _t->on_loadButtonAir_clicked(); break;
        case 3: _t->on_loadButtonSubSurface_clicked(); break;
        case 4: _t->on_loadButtonCMS_clicked(); break;
        case 5: _t->on_loadButtonAGM_clicked(); break;
        case 6: _t->on_loadButtonAGS1_clicked(); break;
        case 7: _t->on_loadButtonAGS2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DistributeDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DistributeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DistributeDialog,
      qt_meta_data_DistributeDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DistributeDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DistributeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DistributeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DistributeDialog))
        return static_cast<void*>(const_cast< DistributeDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int DistributeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
