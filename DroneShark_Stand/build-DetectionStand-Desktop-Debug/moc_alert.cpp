/****************************************************************************
** Meta object code from reading C++ file 'alert.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DetectionStand/alert.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Alert_t {
    QByteArrayData data[11];
    char stringdata[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Alert_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Alert_t qt_meta_stringdata_Alert = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 12),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 11),
QT_MOC_LITERAL(4, 32, 12),
QT_MOC_LITERAL(5, 45, 9),
QT_MOC_LITERAL(6, 55, 12),
QT_MOC_LITERAL(7, 68, 7),
QT_MOC_LITERAL(8, 76, 13),
QT_MOC_LITERAL(9, 90, 8),
QT_MOC_LITERAL(10, 99, 9)
    },
    "Alert\0toggleLights\0\0greenToggle\0"
    "yellowToggle\0redToggle\0buzzerToggle\0"
    "standby\0droneDetected\0scanning\0deployGUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Alert[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Alert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Alert *_t = static_cast<Alert *>(_o);
        switch (_id) {
        case 0: _t->toggleLights(); break;
        case 1: _t->greenToggle(); break;
        case 2: _t->yellowToggle(); break;
        case 3: _t->redToggle(); break;
        case 4: _t->buzzerToggle(); break;
        case 5: _t->standby(); break;
        case 6: _t->droneDetected(); break;
        case 7: _t->scanning(); break;
        case 8: _t->deployGUI(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Alert::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Alert.data,
      qt_meta_data_Alert,  qt_static_metacall, 0, 0}
};


const QMetaObject *Alert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Alert::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Alert.stringdata))
        return static_cast<void*>(const_cast< Alert*>(this));
    return QObject::qt_metacast(_clname);
}

int Alert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
