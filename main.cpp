#include <QCoreApplication>
#include <QDate>
#include <QString>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDate d;
    d.setDate(1999,6,9);
    qDebug()<<d.toString("yyyy/MM/dd");
    return a.exec();
}
