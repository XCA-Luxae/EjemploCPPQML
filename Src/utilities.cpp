#include "Inc/utilities.h"

Utilities::Utilities(QObject *parent)
    : QObject{parent}
{
    qDebug() << "Utilities are being created!";
}

QString Utilities::getInfo1()
{
    qDebug() << "Execute getInfo1!";
    return "I'm info 1";
}

QString Utilities::getInfo2()
{
    qDebug() << "Execute getInfo2!";
    return "I'm info 2";
}
