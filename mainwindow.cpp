#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>
#include"math.h"

#define min_f(a, b, c)  (fminf(a, fminf(b, c)))
#define max_f(a, b, c)  (fmaxf(a, fmaxf(b, c)))
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
}
void MainWindow::on_textEditvalueChanged(int value)
{
      ui->horizontalSlider->setValue(value);
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{

    int h=ui->horizontalSlider->value();
    int s=ui->horizontalSlider_2->value();
    int v=ui->horizontalSlider_3->value();

    ui->spinBox->setValue(h);
    ui->spinBox_2->setValue(s);
    ui->spinBox_3->setValue(v);


    hsv_t.h = ui->horizontalSlider->value();
    hsv_t.s = ui->horizontalSlider_2->value()/100.0;
    hsv_t.v = ui->horizontalSlider_3->value()/100.0;

    hsv2rgb(&hsv_t, &rgb_t);


    int r=rgb_t.r;
    int g=rgb_t.g;
    int b=rgb_t.b;
    //QString r=QString::number(rgb_t.r);

    //int g=r.toInt();
    ui->spinBox_4->setValue(r);
    ui->spinBox_5->setValue(g);
    ui->spinBox_6->setValue(b);

    rgb2xyz(&rgb_t,&xyz_t);


    int x=xyz_t.x;
    int y=xyz_t.y;
    int z=xyz_t.z;
    ui->spinBox_7->setValue(x);
    ui->spinBox_8->setValue(y);
    ui->spinBox_9->setValue(z);
    QString style = "background-color: rgb("+ QString::number(r) +","+ QString::number(g) +","+ QString::number(b) +");";
    ui->textBrowser->setStyleSheet(style);

}
void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{

    int h=ui->horizontalSlider->value();
    int s=ui->horizontalSlider_2->value();
    int v=ui->horizontalSlider_3->value();

    ui->spinBox->setValue(h);
    ui->spinBox_2->setValue(s);
    ui->spinBox_3->setValue(v);


    hsv_t.h = ui->horizontalSlider->value();
    hsv_t.s = ui->horizontalSlider_2->value()/100.0;
    hsv_t.v = ui->horizontalSlider_3->value()/100.0;

    hsv2rgb(&hsv_t, &rgb_t);


    int r=rgb_t.r;
    int g=rgb_t.g;
    int b=rgb_t.b;
    ui->spinBox_4->setValue(r);
    ui->spinBox_5->setValue(g);
    ui->spinBox_6->setValue(b);

    rgb2xyz(&rgb_t,&xyz_t);


    int x=xyz_t.x;
    int y=xyz_t.y;
    int z=xyz_t.z;
    ui->spinBox_7->setValue(x);
    ui->spinBox_8->setValue(y);
    ui->spinBox_9->setValue(z);
    QString style = "background-color: rgb("+ QString::number(r) +","+ QString::number(g) +","+ QString::number(b) +");";
    ui->textBrowser->setStyleSheet(style);
}
void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{

    int h=ui->horizontalSlider->value();
    int s=ui->horizontalSlider_2->value();
    int v=ui->horizontalSlider_3->value();

    ui->spinBox->setValue(h);
    ui->spinBox_2->setValue(s);
    ui->spinBox_3->setValue(v);


    hsv_t.h = ui->horizontalSlider->value();
    hsv_t.s = ui->horizontalSlider_2->value()/100.0;
    hsv_t.v = ui->horizontalSlider_3->value()/100.0;

    hsv2rgb(&hsv_t, &rgb_t);


    int r=rgb_t.r;
    int g=rgb_t.g;
    int b=rgb_t.b;
    ui->spinBox_4->setValue(r);
    ui->spinBox_5->setValue(g);
    ui->spinBox_6->setValue(b);

    rgb2xyz(&rgb_t,&xyz_t);


    int x=xyz_t.x;
    int y=xyz_t.y;
    int z=xyz_t.z;
    ui->spinBox_7->setValue(x);
    ui->spinBox_8->setValue(y);
    ui->spinBox_9->setValue(z);
    QString style = "background-color: rgb("+ QString::number(r) +","+ QString::number(g) +","+ QString::number(b) +");";
    ui->textBrowser->setStyleSheet(style);
}

void MainWindow::on_horizontalSlider_4_valueChanged(int value)
{
    int r=ui->horizontalSlider_4->value();
    int g=ui->horizontalSlider_5->value();
    int b=ui->horizontalSlider_6->value();

    ui->spinBox_4->setValue(r);
    ui->spinBox_5->setValue(g);
    ui->spinBox_6->setValue(b);


    rgb_t.g = ui->horizontalSlider_4->value();
    rgb_t.g = ui->horizontalSlider_5->value();
    rgb_t.b = ui->horizontalSlider_6->value();
    rgb2hsv(&rgb_t, &hsv_t);


    int h=hsv_t.h;
    int s=hsv_t.s;
    int v=hsv_t.v;

    ui->spinBox->setValue(h);
    ui->spinBox_2->setValue(s);
    ui->spinBox_3->setValue(v);

    rgb2xyz(&rgb_t,&xyz_t);
    int x = xyz_t.x;
    int y = xyz_t.y;
    int z = xyz_t.z;
    ui->spinBox_7->setValue(x);
    ui->spinBox_8->setValue(y);
    ui->spinBox_9->setValue(z);
    QString style = "background-color: rgb("+ QString::number(r) +","+ QString::number(g) +","+ QString::number(b) +");";
    ui->textBrowser->setStyleSheet(style);
}
void MainWindow::on_horizontalSlider_5_valueChanged(int value)
{
    int r=ui->horizontalSlider_4->value();
    int g=ui->horizontalSlider_5->value();
    int b=ui->horizontalSlider_6->value();

    ui->spinBox_4->setValue(r);
    ui->spinBox_5->setValue(g);
    ui->spinBox_6->setValue(b);


    rgb_t.g = ui->horizontalSlider_4->value();
    rgb_t.g = ui->horizontalSlider_5->value();
    rgb_t.b = ui->horizontalSlider_6->value();
    rgb2hsv(&rgb_t, &hsv_t);


    int h=hsv_t.h;
    int s=hsv_t.s;
    int v=hsv_t.v;

    ui->spinBox->setValue(h);
    ui->spinBox_2->setValue(s);
    ui->spinBox_3->setValue(v);

    rgb2xyz(&rgb_t,&xyz_t);
    int x = xyz_t.x;
    int y = xyz_t.y;
    int z = xyz_t.z;
    ui->spinBox_7->setValue(x);
    ui->spinBox_8->setValue(y);
    ui->spinBox_9->setValue(z);
    QString style = "background-color: rgb("+ QString::number(r) +","+ QString::number(g) +","+ QString::number(b) +");";
    ui->textBrowser->setStyleSheet(style);
}
void MainWindow::on_horizontalSlider_6_valueChanged(int value)
{
    int r=ui->horizontalSlider_4->value();
    int g=ui->horizontalSlider_5->value();
    int b=ui->horizontalSlider_6->value();

    ui->spinBox_4->setValue(r);
    ui->spinBox_5->setValue(g);
    ui->spinBox_6->setValue(b);

    rgb_t.g = ui->horizontalSlider_4->value();
    rgb_t.g = ui->horizontalSlider_5->value();
    rgb_t.b = ui->horizontalSlider_6->value();
    rgb2hsv(&rgb_t, &hsv_t);


    int h=hsv_t.h;
    int s=hsv_t.s;
    int v=hsv_t.v;

    ui->spinBox->setValue(h);
    ui->spinBox_2->setValue(s);
    ui->spinBox_3->setValue(v);

    rgb2xyz(&rgb_t,&xyz_t);
    int x = xyz_t.x;
    int y = xyz_t.y;
    int z = xyz_t.z;
    ui->spinBox_7->setValue(x);
    ui->spinBox_8->setValue(y);
    ui->spinBox_9->setValue(z);
    QString style = "background-color: rgb("+ QString::number(r) +","+ QString::number(g) +","+ QString::number(b) +");";
    ui->textBrowser->setStyleSheet(style);
}

void MainWindow::on_horizontalSlider_7_valueChanged(int value)
{

    int x=ui->horizontalSlider_7->value();
    int y=ui->horizontalSlider_8->value();
    int z=ui->horizontalSlider_9->value();
    ui->spinBox_7->setValue(x);
    ui->spinBox_8->setValue(y);
    ui->spinBox_9->setValue(z);

    xyz_t.x = ui->horizontalSlider_7->value();
    xyz_t.y = ui->horizontalSlider_8->value();
    xyz_t.z = ui->horizontalSlider_9->value();

    xyz2rgb(&xyz_t, &rgb_t);


    int r=rgb_t.r;
    int g=rgb_t.g;
    int b=rgb_t.b;
    ui->spinBox_4->setValue(r);
    ui->spinBox_5->setValue(g);
    ui->spinBox_6->setValue(b);

    rgb2hsv(&rgb_t,&hsv_t);

    int h=hsv_t.h;
    int s=hsv_t.s;
    int v=hsv_t.v;
    ui->spinBox->setValue(h);
    ui->spinBox_2->setValue(s);
    ui->spinBox_3->setValue(v);


    QString style = "background-color: rgb("+ QString::number(r) +","+ QString::number(g) +","+ QString::number(b) +");";
    ui->textBrowser->setStyleSheet(style);
}
void MainWindow::on_horizontalSlider_8_valueChanged(int value)
{

    int x=ui->horizontalSlider_7->value();
    int y=ui->horizontalSlider_8->value();
    int z=ui->horizontalSlider_9->value();
    ui->spinBox_7->setValue(x);
    ui->spinBox_8->setValue(y);
    ui->spinBox_9->setValue(z);

    xyz_t.x = ui->horizontalSlider_7->value();
    xyz_t.y = ui->horizontalSlider_8->value();
    xyz_t.z = ui->horizontalSlider_9->value();

    xyz2rgb(&xyz_t, &rgb_t);

    int r=rgb_t.r;
    int g=rgb_t.g;
    int b=rgb_t.b;
    ui->spinBox_4->setValue(r);
    ui->spinBox_5->setValue(g);
    ui->spinBox_6->setValue(b);

    rgb2hsv(&rgb_t,&hsv_t);

    int h=hsv_t.h;
    int s=hsv_t.s;
    int v=hsv_t.v;
    ui->spinBox->setValue(h);
    ui->spinBox_2->setValue(s);
    ui->spinBox_3->setValue(v);


    QString style = "background-color: rgb("+ QString::number(r) +","+ QString::number(g) +","+ QString::number(b) +");";
    ui->textBrowser->setStyleSheet(style);
}
void MainWindow::on_horizontalSlider_9_valueChanged(int value)
{

    int x=ui->horizontalSlider_7->value();
    int y=ui->horizontalSlider_8->value();
    int z=ui->horizontalSlider_9->value();
    ui->spinBox_7->setValue(x);
    ui->spinBox_8->setValue(y);
    ui->spinBox_9->setValue(z);

    xyz_t.x = ui->horizontalSlider_7->value();
    xyz_t.y = ui->horizontalSlider_8->value();
    xyz_t.z = ui->horizontalSlider_9->value();

    xyz2rgb(&xyz_t, &rgb_t);

    int r=rgb_t.r;
    int g=rgb_t.g;
    int b=rgb_t.b;
    ui->spinBox_4->setValue(r);
    ui->spinBox_5->setValue(g);
    ui->spinBox_6->setValue(b);

    rgb2hsv(&rgb_t,&hsv_t);

    int h=ui->horizontalSlider->value();
    int s=ui->horizontalSlider_2->value();
    int v=ui->horizontalSlider_3->value();
    ui->spinBox->setValue(h);
    ui->spinBox_2->setValue(s);
    ui->spinBox_3->setValue(v);

    QString style = "background-color: rgb("+ QString::number(r) +","+ QString::number(g) +","+ QString::number(b) +");";
    ui->textBrowser->setStyleSheet(style);
}


void MainWindow::hsv2rgb(color_hsv_t* hsv, color_rgb_t* rgb){
    int i;
    float f, a, b, c;
    float h = hsv->h;
    float s = hsv->s;
    float v = hsv->v;
    if(h >= 360){
        h = 0;
    }
    if(s == 0){
        rgb->r = (uchar)(v*255);
        rgb->g = (uchar)(v*255);
        rgb->b = (uchar)(v*255);
    }
    else{
        h /= 60.0;
        i = (int)floor(h);
        f = h - i;
        a = v*(1-s);
        b = v*(1-s*f);
        c = v*(1-s*(1-f));
        switch(i) {
        case 0:
            rgb->r = (uchar)((int)(v*255)); //v*255
            rgb->g = (uchar)((int)(c*255)); //c*255;
            rgb->b = (uchar)((int)(a*255)); //a*255;
            break;
        case 1:
            rgb->r = (uchar)((int)(b*255)); //b*255;
            rgb->g = (uchar)((int)(v*255)); //v*255;
            rgb->b = (uchar)((int)(a*255)); //a*255;
            break;
        case 2:
            rgb->r = (uchar)((int)(a*255)); //a*255;
            rgb->g = (uchar)((int)(v*255)); //v*255;
            rgb->b = (uchar)((int)(c*255)); //c*255;
            break;
        case 3:
            rgb->r = (uchar)((int)(a*255));//a*255;
            rgb->g = (uchar)((int)(b*255));//b*255;
            rgb->b = (uchar)((int)(v*255));//v*255;
            break;
        case 4:
            rgb->r = (uchar)((int)(c*255)); //c*255;
            rgb->g = (uchar)((int)(a*255)); //a*255;
            rgb->b = (uchar)((int)(v*255)); //v*255;
            break;
        default:
            rgb->r = (uchar)((int)(v*255)); //v*255;
            rgb->g = (uchar)((int)(a*255)); //a*255;
            rgb->b = (uchar)((int)(b*255)); //b*255;
            break;
        }
    }
}

void MainWindow::rgb2xyz(color_rgb_t *rgb, color_xyz_t* xyz){
    double dTempR = (rgb->r / 255.0);
    double dTempG = (rgb->g / 255.0);
    double dTempB = (rgb->b / 255.0);

    if(0.04045 < dTempR)
    {
        dTempR = pow((dTempR + 0.055) / 1.055, 2.4);
    }
    else
    {
        dTempR /= 12.92;
    }

    if(0.04045 < dTempG)
    {
        dTempG = pow((dTempG + 0.055) / 1.055, 2.4);
    }
    else
    {
        dTempG /= 12.92;
    }

    if(0.04045 < dTempB)
    {
        dTempB = pow((dTempB + 0.055) / 1.055, 2.4);
    }
    else
    {
        dTempB /= 12.92;
    }

    dTempR *= 100.0;
    dTempG *= 100.0;
    dTempB *= 100.0;

    //Observer. = 2°, Illuminant = D65
    xyz->x = 0.4124564 * dTempR + 0.3575761 * dTempG + 0.1804375 * dTempB;
    xyz->y = 0.2126729 * dTempR + 0.7151522 * dTempG + 0.0721750 * dTempB;
    xyz->z = 0.0193339 * dTempR + 0.1191920 * dTempG + 0.9503041 * dTempB;

}

void MainWindow::rgb2hsv(color_rgb_t* rgb, color_hsv_t* hsv)
{
    float r = rgb->r / 255.0f;
    float g = rgb->g / 255.0f;
    float b = rgb->b / 255.0f;

    float h, s, v; // h:0-360.0, s:0.0-1.0, v:0.0-1.0

    float max = max_f(r, g, b);
    float min = min_f(r, g, b);

    v = max;

    if (max == 0.0f) {
        s = 0;
        h = 0;
    }
    else if (max - min == 0.0f) {
        s = 0;
        h = 0;
    }
    else {
        s = (max - min) / max;

        if (max == r) {
            h = 60 * ((g - b) / (max - min)) + 0;
        }
        else if (max == g) {
            h = 60 * ((b - r) / (max - min)) + 120;
        }
        else {
            h = 60 * ((r - g) / (max - min)) + 240;
        }
    }

    if (h < 0) h += 360.0f;

    hsv->h = (unsigned char)(h / 2);   // dst_h : 0-180
    hsv->s = (unsigned char)(s * 255); // dst_s : 0-255
    hsv->v = (unsigned char)(v * 255); // dst_v : 0-255
}

void MainWindow::xyz2rgb(color_xyz_t* xyz, color_rgb_t* rgb)
{
    double dTempX = xyz->x / 100.0f;        // X from 0 to  95.047      (Observer = 2°, Illuminant = D65)
    double dTempY = xyz->y / 100.0f;        // Y from 0 to 100.000
    double dTempZ = xyz->z / 100.0f;        // Z from 0 to 108.883

    double dTempR = dTempX * 3.2404542 + dTempY * -1.5371385 + dTempZ * -0.4985314;
    double dTempG = dTempX * -0.9692660 + dTempY * 1.8760108 + dTempZ * 0.0415560;
    double dTempB = dTempX * 0.0556434 + dTempY * -0.2040259 + dTempZ * 1.0572252;

    if(0.0031308 < dTempR)
    {
        dTempR = 1.055 * (pow(dTempR, (1 / 2.4))) - 0.055;
    }
    else
    {
        dTempR *= 12.92;
    }

    if(0.0031308 < dTempG)
    {
        dTempG = 1.055 * (pow(dTempG, (1 / 2.4))) - 0.055;
    }
    else
    {
        dTempG *= 12.92;
    }

    if(0.0031308 < dTempB)
    {
        dTempB = 1.055 * (pow(dTempB, (1 / 2.4))) - 0.055;
    }
    else
    {
        dTempB *= 12.92;
    }

    rgb->r = 255.0f * dTempR;
    rgb->g = 255.0f * dTempG;
    rgb->b = 255.0f * dTempB;
}
