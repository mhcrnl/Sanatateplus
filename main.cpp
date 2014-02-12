#include "sanatateplus.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sanatateplus w;
    w.show();

    return a.exec();
}
