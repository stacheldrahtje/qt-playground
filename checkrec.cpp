#include "checkrec.h"
#include <QDebug>
#include <QString>
#include <QRegularExpression>

checkrec::checkrec()
{
    static QRegularExpression variabel("Dit");
    QString dat = "Dit";
    QRegularExpressionMatch match = variabel.match(dat);
    if (match.hasMatch() == true)
    {
        qDebug() << "Match";
    }
    else
    {
        qDebug() << "No match";
    }

}
