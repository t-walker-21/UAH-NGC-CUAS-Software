/****************************************************************************
** Meta object code from reading C++ file 'hardwaremanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DetectionStand/hardwaremanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hardwaremanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HardwareManager_t {
    QByteArrayData data[9];
    char stringdata[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HardwareManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HardwareManager_t qt_meta_stringdata_HardwareManager = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 13),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 14),
QT_MOC_LITERAL(4, 46, 16),
QT_MOC_LITERAL(5, 63, 16),
QT_MOC_LITERAL(6, 80, 14),
QT_MOC_LITERAL(7, 95, 13),
QT_MOC_LITERAL(8, 109, 13)
    },
    "HardwareManager\0hackRFRemoved\0\0"
    "alfaWfiRemoved\0xbeeRadioRemoved\0"
    "readHackRFOutput\0readAlfaOutput\0"
    "readXbeeRadio\0checkHardware"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HardwareManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HardwareManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HardwareManager *_t = static_cast<HardwareManager *>(_o);
        switch (_id) {
        case 0: _t->hackRFRemoved(); break;
        case 1: _t->alfaWfiRemoved(); break;
        case 2: _t->xbeeRadioRemoved(); break;
        case 3: _t->readHackRFOutput(); break;
        case 4: _t->readAlfaOutput(); break;
        case 5: _t->readXbeeRadio(); break;
        case 6: _t->checkHardware(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HardwareManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HardwareManager::hackRFRemoved)) {
                *result = 0;
            }
        }
        {
            typedef void (HardwareManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HardwareManager::alfaWfiRemoved)) {
                *result = 1;
            }
        }
        {
            typedef void (HardwareManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HardwareManager::xbeeRadioRemoved)) {
                *result = 2;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject HardwareManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HardwareManager.data,
      qt_meta_data_HardwareManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *HardwareManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HardwareManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HardwareManager.stringdata))
        return static_cast<void*>(const_cast< HardwareManager*>(this));
    return QObject::qt_metacast(_clname);
}

int HardwareManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void HardwareManager::hackRFRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void HardwareManager::alfaWfiRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void HardwareManager::xbeeRadioRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
