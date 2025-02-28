#include "Inc/cppproperty.h"

CppProperty::CppProperty(QObject *parent)
    : QObject{parent}
    , m_counter{0}
{
    qDebug() << "CppProperty is being created!";
}

int CppProperty::getCounter()
{
    qDebug() << "Execute getCounter!" << m_counter;
    return m_counter;
}

void CppProperty::setCounter(int value)
{
    qDebug() << "Execute setCounter! " << value;
    if(m_counter == value)
        return;

    m_counter = value;
    emit counterChanged();
}
