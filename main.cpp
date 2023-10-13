#include <QCoreApplication>
#include "checkrec.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    checkrec();
    //return a.exec(); // commented out to make sure it is execute and exit.
}
