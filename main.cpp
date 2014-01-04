#include <QtGui/QApplication>
#include "betparser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    betParser w;
    w.show();

    return a.exec();
}
