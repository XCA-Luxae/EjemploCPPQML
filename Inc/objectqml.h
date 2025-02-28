#ifndef OBJECTQML_H
#define OBJECTQML_H

#include <QObject>
#include <QDebug>

class ObjectQML : public QObject
{
    Q_OBJECT
public:
    explicit ObjectQML(QObject *parent = nullptr);
    Q_INVOKABLE void function1();
    Q_INVOKABLE void function2();

signals:
};

#endif // OBJECTQML_H
