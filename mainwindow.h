#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    typedef struct{
            float h;
            float s;
            float v;
        }color_hsv_t;
        color_hsv_t hsv_t;
        typedef struct{
            uchar r;
            uchar g;
            uchar b;
        }color_rgb_t;
        color_rgb_t rgb_t;
        typedef struct{
            double x;
            double y;
            double z;
        }color_xyz_t;
        color_xyz_t xyz_t;

        void hsv2rgb(color_hsv_t* hsv, color_rgb_t* rgb);
        void rgb2xyz(color_rgb_t* rgb,color_xyz_t* xyz);
        void rgb2hsv(color_rgb_t* rgb, color_hsv_t* hsv);
        void xyz2rgb(color_xyz_t* xyz, color_rgb_t* rgb);
    private slots:
void on_textEditvalueChanged(int value);
        void on_horizontalSlider_valueChanged(int value);
        //void on_spinbox_valueChanged(int val);
        void on_horizontalSlider_2_valueChanged(int value);
        void on_horizontalSlider_3_valueChanged(int value);
        void on_horizontalSlider_4_valueChanged(int value);
        void on_horizontalSlider_5_valueChanged(int value);
        void on_horizontalSlider_6_valueChanged(int value);
        void on_horizontalSlider_7_valueChanged(int value);
        void on_horizontalSlider_8_valueChanged(int value);
        void on_horizontalSlider_9_valueChanged(int value);


    private:
        Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
