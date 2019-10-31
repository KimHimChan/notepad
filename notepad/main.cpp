#include "notepad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    notepad w;
    //w.show();

    w.setMinimumHeight(455);
    w.setMaximumHeight(455);
    w.setMinimumWidth(560);
    w.setMaximumWidth(560);
    w.show();
    return a.exec();
}
