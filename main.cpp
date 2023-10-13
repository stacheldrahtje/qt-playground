#include <QCoreApplication>
#include "checkrec.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    checkrec();
    return a.exec();
}
