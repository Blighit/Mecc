/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/qt_ros_test/include/qt_ros_test/main_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qt_ros_test__MainWindow_t {
    QByteArrayData data[63];
    char stringdata0[1345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qt_ros_test__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qt_ros_test__MainWindow_t qt_meta_stringdata_qt_ros_test__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 23), // "qt_ros_test::MainWindow"
QT_MOC_LITERAL(1, 24, 7), // "sigSend"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "strMsg"
QT_MOC_LITERAL(4, 40, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(5, 65, 13), // "slot_cmd_read"
QT_MOC_LITERAL(6, 79, 12), // "slot_cmd_err"
QT_MOC_LITERAL(7, 92, 12), // "slot_rosOpen"
QT_MOC_LITERAL(8, 105, 12), // "cmd_finished"
QT_MOC_LITERAL(9, 118, 8), // "exitCode"
QT_MOC_LITERAL(10, 127, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(11, 148, 10), // "exitStatus"
QT_MOC_LITERAL(12, 159, 23), // "on_checkBox_key_clicked"
QT_MOC_LITERAL(13, 183, 7), // "checked"
QT_MOC_LITERAL(14, 191, 13), // "pushButton_go"
QT_MOC_LITERAL(15, 205, 15), // "pushButton_stop"
QT_MOC_LITERAL(16, 221, 12), // "updata_image"
QT_MOC_LITERAL(17, 234, 16), // "slotbatteryState"
QT_MOC_LITERAL(18, 251, 14), // "slotspeedState"
QT_MOC_LITERAL(19, 266, 33), // "on_horizontalSlider_v_sliderM..."
QT_MOC_LITERAL(20, 300, 8), // "position"
QT_MOC_LITERAL(21, 309, 33), // "on_horizontalSlider_c_sliderM..."
QT_MOC_LITERAL(22, 343, 31), // "on_checkBox__opencamera_clicked"
QT_MOC_LITERAL(23, 375, 26), // "on_pushButton_base_clicked"
QT_MOC_LITERAL(24, 402, 27), // "on_pushButton_laser_clicked"
QT_MOC_LITERAL(25, 430, 25), // "on_pushButton_joy_clicked"
QT_MOC_LITERAL(26, 456, 34), // "on_pushButton_linefollower_cl..."
QT_MOC_LITERAL(27, 491, 35), // "on_pushButton_laserfollower_c..."
QT_MOC_LITERAL(28, 527, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(29, 549, 28), // "on_pushButton_subimg_clicked"
QT_MOC_LITERAL(30, 578, 33), // "on_pushButton_visfollower_cli..."
QT_MOC_LITERAL(31, 612, 31), // "on_pushButton_webusbcam_clicked"
QT_MOC_LITERAL(32, 644, 27), // "on_pushButton_2dmap_clicked"
QT_MOC_LITERAL(33, 672, 31), // "on_pushButton_2dmapsave_clicked"
QT_MOC_LITERAL(34, 704, 27), // "on_pushButton_2dnav_clicked"
QT_MOC_LITERAL(35, 732, 27), // "on_pushButton_3dmap_clicked"
QT_MOC_LITERAL(36, 760, 27), // "on_pushButton_3dnav_clicked"
QT_MOC_LITERAL(37, 788, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(38, 812, 29), // "on_lineEdit_cmd_returnPressed"
QT_MOC_LITERAL(39, 842, 13), // "keyPressEvent"
QT_MOC_LITERAL(40, 856, 10), // "QKeyEvent*"
QT_MOC_LITERAL(41, 867, 5), // "event"
QT_MOC_LITERAL(42, 873, 15), // "keyReleaseEvent"
QT_MOC_LITERAL(43, 889, 11), // "slottimeout"
QT_MOC_LITERAL(44, 901, 24), // "on_quit_button_2_clicked"
QT_MOC_LITERAL(45, 926, 29), // "on_pushButton_2dmap_2_clicked"
QT_MOC_LITERAL(46, 956, 29), // "on_pushButton_2dmap_3_clicked"
QT_MOC_LITERAL(47, 986, 23), // "slotConnectStateChanged"
QT_MOC_LITERAL(48, 1010, 6), // "bState"
QT_MOC_LITERAL(49, 1017, 5), // "strIp"
QT_MOC_LITERAL(50, 1023, 5), // "nPort"
QT_MOC_LITERAL(51, 1029, 25), // "on_pushButton_kcf_clicked"
QT_MOC_LITERAL(52, 1055, 25), // "on_pushButton_orb_clicked"
QT_MOC_LITERAL(53, 1081, 25), // "on_pushButton_rrt_clicked"
QT_MOC_LITERAL(54, 1107, 27), // "on_pushButton_path1_clicked"
QT_MOC_LITERAL(55, 1135, 27), // "on_pushButton_path2_clicked"
QT_MOC_LITERAL(56, 1163, 25), // "on_pushButton_tts_clicked"
QT_MOC_LITERAL(57, 1189, 25), // "on_pushButton_mic_clicked"
QT_MOC_LITERAL(58, 1215, 25), // "on_pushButton_gu1_clicked"
QT_MOC_LITERAL(59, 1241, 25), // "on_pushButton_gu2_clicked"
QT_MOC_LITERAL(60, 1267, 25), // "on_pushButton_gu3_clicked"
QT_MOC_LITERAL(61, 1293, 25), // "on_pushButton_ar1_clicked"
QT_MOC_LITERAL(62, 1319, 25) // "on_pushButton_ar2_clicked"

    },
    "qt_ros_test::MainWindow\0sigSend\0\0"
    "strMsg\0on_actionAbout_triggered\0"
    "slot_cmd_read\0slot_cmd_err\0slot_rosOpen\0"
    "cmd_finished\0exitCode\0QProcess::ExitStatus\0"
    "exitStatus\0on_checkBox_key_clicked\0"
    "checked\0pushButton_go\0pushButton_stop\0"
    "updata_image\0slotbatteryState\0"
    "slotspeedState\0on_horizontalSlider_v_sliderMoved\0"
    "position\0on_horizontalSlider_c_sliderMoved\0"
    "on_checkBox__opencamera_clicked\0"
    "on_pushButton_base_clicked\0"
    "on_pushButton_laser_clicked\0"
    "on_pushButton_joy_clicked\0"
    "on_pushButton_linefollower_clicked\0"
    "on_pushButton_laserfollower_clicked\0"
    "on_pushButton_clicked\0"
    "on_pushButton_subimg_clicked\0"
    "on_pushButton_visfollower_clicked\0"
    "on_pushButton_webusbcam_clicked\0"
    "on_pushButton_2dmap_clicked\0"
    "on_pushButton_2dmapsave_clicked\0"
    "on_pushButton_2dnav_clicked\0"
    "on_pushButton_3dmap_clicked\0"
    "on_pushButton_3dnav_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_lineEdit_cmd_returnPressed\0"
    "keyPressEvent\0QKeyEvent*\0event\0"
    "keyReleaseEvent\0slottimeout\0"
    "on_quit_button_2_clicked\0"
    "on_pushButton_2dmap_2_clicked\0"
    "on_pushButton_2dmap_3_clicked\0"
    "slotConnectStateChanged\0bState\0strIp\0"
    "nPort\0on_pushButton_kcf_clicked\0"
    "on_pushButton_orb_clicked\0"
    "on_pushButton_rrt_clicked\0"
    "on_pushButton_path1_clicked\0"
    "on_pushButton_path2_clicked\0"
    "on_pushButton_tts_clicked\0"
    "on_pushButton_mic_clicked\0"
    "on_pushButton_gu1_clicked\0"
    "on_pushButton_gu2_clicked\0"
    "on_pushButton_gu3_clicked\0"
    "on_pushButton_ar1_clicked\0"
    "on_pushButton_ar2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qt_ros_test__MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  264,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  267,    2, 0x0a /* Public */,
       5,    0,  268,    2, 0x0a /* Public */,
       6,    0,  269,    2, 0x0a /* Public */,
       7,    0,  270,    2, 0x0a /* Public */,
       8,    2,  271,    2, 0x0a /* Public */,
      12,    1,  276,    2, 0x08 /* Private */,
      14,    0,  279,    2, 0x08 /* Private */,
      15,    0,  280,    2, 0x08 /* Private */,
      16,    1,  281,    2, 0x08 /* Private */,
      17,    1,  284,    2, 0x08 /* Private */,
      18,    6,  287,    2, 0x08 /* Private */,
      19,    1,  300,    2, 0x08 /* Private */,
      21,    1,  303,    2, 0x08 /* Private */,
      22,    1,  306,    2, 0x08 /* Private */,
      23,    1,  309,    2, 0x08 /* Private */,
      24,    1,  312,    2, 0x08 /* Private */,
      25,    1,  315,    2, 0x08 /* Private */,
      26,    1,  318,    2, 0x08 /* Private */,
      27,    1,  321,    2, 0x08 /* Private */,
      28,    1,  324,    2, 0x08 /* Private */,
      29,    1,  327,    2, 0x08 /* Private */,
      30,    1,  330,    2, 0x08 /* Private */,
      31,    1,  333,    2, 0x08 /* Private */,
      32,    1,  336,    2, 0x08 /* Private */,
      33,    1,  339,    2, 0x08 /* Private */,
      34,    1,  342,    2, 0x08 /* Private */,
      35,    1,  345,    2, 0x08 /* Private */,
      36,    1,  348,    2, 0x08 /* Private */,
      37,    1,  351,    2, 0x08 /* Private */,
      38,    0,  354,    2, 0x08 /* Private */,
      39,    1,  355,    2, 0x08 /* Private */,
      42,    1,  358,    2, 0x08 /* Private */,
      43,    0,  361,    2, 0x08 /* Private */,
      44,    1,  362,    2, 0x08 /* Private */,
      45,    0,  365,    2, 0x08 /* Private */,
      46,    0,  366,    2, 0x08 /* Private */,
      47,    3,  367,    2, 0x08 /* Private */,
      51,    1,  374,    2, 0x08 /* Private */,
      52,    1,  377,    2, 0x08 /* Private */,
      53,    1,  380,    2, 0x08 /* Private */,
      54,    1,  383,    2, 0x08 /* Private */,
      55,    1,  386,    2, 0x08 /* Private */,
      56,    1,  389,    2, 0x08 /* Private */,
      57,    1,  392,    2, 0x08 /* Private */,
      58,    1,  395,    2, 0x08 /* Private */,
      59,    1,  398,    2, 0x08 /* Private */,
      60,    1,  401,    2, 0x08 /* Private */,
      61,    1,  404,    2, 0x08 /* Private */,
      62,    1,  407,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Int,   48,   49,   50,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void qt_ros_test::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigSend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_actionAbout_triggered(); break;
        case 2: _t->slot_cmd_read(); break;
        case 3: _t->slot_cmd_err(); break;
        case 4: _t->slot_rosOpen(); break;
        case 5: _t->cmd_finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 6: _t->on_checkBox_key_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->pushButton_go(); break;
        case 8: _t->pushButton_stop(); break;
        case 9: _t->updata_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 10: _t->slotbatteryState((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->slotspeedState((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 12: _t->on_horizontalSlider_v_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_horizontalSlider_c_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_checkBox__opencamera_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_pushButton_base_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_pushButton_laser_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->on_pushButton_joy_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->on_pushButton_linefollower_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->on_pushButton_laserfollower_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->on_pushButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->on_pushButton_subimg_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->on_pushButton_visfollower_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->on_pushButton_webusbcam_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->on_pushButton_2dmap_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->on_pushButton_2dmapsave_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->on_pushButton_2dnav_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->on_pushButton_3dmap_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->on_pushButton_3dnav_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->on_pushButton_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->on_lineEdit_cmd_returnPressed(); break;
        case 31: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 32: _t->keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 33: _t->slottimeout(); break;
        case 34: _t->on_quit_button_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->on_pushButton_2dmap_2_clicked(); break;
        case 36: _t->on_pushButton_2dmap_3_clicked(); break;
        case 37: _t->slotConnectStateChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 38: _t->on_pushButton_kcf_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->on_pushButton_orb_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->on_pushButton_rrt_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->on_pushButton_path1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->on_pushButton_path2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->on_pushButton_tts_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->on_pushButton_mic_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->on_pushButton_gu1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->on_pushButton_gu2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->on_pushButton_gu3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->on_pushButton_ar1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->on_pushButton_ar2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sigSend)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qt_ros_test::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_qt_ros_test__MainWindow.data,
    qt_meta_data_qt_ros_test__MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qt_ros_test::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qt_ros_test::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qt_ros_test__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int qt_ros_test::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 50;
    }
    return _id;
}

// SIGNAL 0
void qt_ros_test::MainWindow::sigSend(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
