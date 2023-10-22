#include "checkrec.h"
#include <QDebug>
#include <QString>
#include <QRegularExpression>

checkrec::checkrec()
{
    static QRegularExpression variabel("&|<|>|\\\\| |/");
    QString dat;
    QTextStream qtin(stdin);
    dat = qtin.readLine();
    qDebug() << "Entered: " << dat << Qt::endl;
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
