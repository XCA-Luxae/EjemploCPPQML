#ifndef CPPPROPERTY_H
#define CPPPROPERTY_H

#include <QObject>
#include <QDebug>

class CppProperty : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int counter READ getCounter WRITE setCounter NOTIFY counterChanged)

public:
    explicit CppProperty(QObject *parent = nullptr);

public slots:
    int getCounter();
    void setCounter(int value);

signals:
    void counterChanged();

private:
    int m_counter;

};

#endif // CPPPROPERTY_H
