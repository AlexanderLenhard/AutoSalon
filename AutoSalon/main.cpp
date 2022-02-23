#include "AutoSalon.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AutoSalon w;
    w.show();
    return a.exec();
}
