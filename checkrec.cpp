#include "checkrec.h"
#include <QDebug>
#include <QString>
#include <QRegularExpression>

checkrec::checkrec()
{
    static QRegularExpression re("Dat");
    QString dat = "Dit";
    QRegularExpressionMatch match = re.match(dat);
    if (match.hasMatch() == true)
    {
        qDebug() << "Match";
    }
    else
    {
        qDebug() << "No match";
    }

}
