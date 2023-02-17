#include "countfileclass.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CountFileClass w;
    w.show();
    return a.exec();
}
