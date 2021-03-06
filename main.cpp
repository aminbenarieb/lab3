#include "mainwindow.h"
#include "tester.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Tester t(w.facade, &a);
    t.loadCamera();
    t.loadModel();
    t.transformModel();

    return a.exec();
}
