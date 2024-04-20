#include "newproj.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    newproj w;
    w.show();
    return a.exec();
}
