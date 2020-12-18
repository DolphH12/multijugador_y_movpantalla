#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene->setSceneRect(0,0,2000,2000);
    scene->setBackgroundBrush(QBrush(QImage(":/mundo.jpg")));
    view->setScene(scene);
    view->resize(400,400);
    this->resize(400,400);
    rects.push_back(new personaje(1));
    scene->addItem(rects.back());
    rects.push_back(new personaje(2));
    scene->addItem(rects.back());
    view->centerOn(rects.at(0)->x(),rects.at(0)->y());
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(rects.size()>0 && rects.size()<2){
        if(event->key() == Qt::Key_W){
            rects.at(0)->setPos(rects.at(0)->x(),rects.at(0)->y()-10);
            view->centerOn(rects.at(0)->x(),rects.at(0)->y());
        }
        if(event->key() == Qt::Key_S){
            rects.at(0)->setPos(rects.at(0)->x(),rects.at(0)->y()+10);
            view->centerOn(rects.at(0)->x(),rects.at(0)->y());
        }
        if(event->key() == Qt::Key_A){
            rects.at(0)->setPos(rects.at(0)->x()-10,rects.at(0)->y());
            view->centerOn(rects.at(0)->x(),rects.at(0)->y());
        }
        if(event->key() == Qt::Key_D){
            rects.at(0)->setPos(rects.at(0)->x()+10,rects.at(0)->y());
            view->centerOn(rects.at(0)->x(),rects.at(0)->y());
        }
    }
    else if(rects.size()==2){
        personaje * a = rects.at(0);
        if(event->key() == Qt::Key_W){
            a->setPos(a->x(),a->y()-10);
            view->centerOn(a->x(),a->y());
        }
        if(event->key() == Qt::Key_S){
            rects.at(0)->setPos(rects.at(0)->x(),rects.at(0)->y()+10);
            view->centerOn(rects.at(0)->x(),rects.at(0)->y());
        }
        if(event->key() == Qt::Key_A){
            rects.at(0)->setPos(rects.at(0)->x()-10,rects.at(0)->y());
            view->centerOn(rects.at(0)->x(),rects.at(0)->y());
        }
        if(event->key() == Qt::Key_D){
            rects.at(0)->setPos(rects.at(0)->x()+10,rects.at(0)->y());
            view->centerOn(rects.at(0)->x(),rects.at(0)->y());
        }
        if(event->key() == Qt::Key_U){
            rects.at(1)->setPos(rects.at(1)->x(),rects.at(1)->y()-10);
            view->centerOn(rects.at(1)->x(),rects.at(1)->y());
        }
        if(event->key() == Qt::Key_J){
            rects.at(1)->setPos(rects.at(1)->x(),rects.at(1)->y()+10);
            view->centerOn(rects.at(1)->x(),rects.at(1)->y());
        }
        if(event->key() == Qt::Key_H){
            rects.at(1)->setPos(rects.at(1)->x()-10,rects.at(1)->y());
            view->centerOn(rects.at(1)->x(),rects.at(1)->y());
        }
        if(event->key() == Qt::Key_K){
            rects.at(1)->setPos(rects.at(1)->x()+10,rects.at(1)->y());
            view->centerOn(rects.at(1)->x(),rects.at(1)->y());
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

