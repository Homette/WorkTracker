#include "worktracker.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WorkTracker w;
    w.show();

    return a.exec();
}
