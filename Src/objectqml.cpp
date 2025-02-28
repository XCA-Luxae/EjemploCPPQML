#include "Inc/objectqml.h"

ObjectQML::ObjectQML(QObject *parent)
    : QObject{parent}
{
    qDebug() << "ObjectQML is being created!";
}

void ObjectQML::function1()
{
    qDebug() << "Function 1 Object qml";
}

void ObjectQML::function2()
{
    qDebug() << "Function 2 Object qml";
}
