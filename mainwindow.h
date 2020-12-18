#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QKeyEvent>
#include <personaje.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void keyPressEvent(QKeyEvent * event);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene = new QGraphicsScene(this);
    QGraphicsView * view = new QGraphicsView(this);
    QList<personaje *> rects;
};
#endif // MAINWINDOW_H
