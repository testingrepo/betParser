#include <QtGui/QApplication>
#include "betparser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    betParser w;
    w.show();

    // add comment for commit
    return a.exec();
}
