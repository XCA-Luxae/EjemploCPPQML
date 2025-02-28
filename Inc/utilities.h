#ifndef UTILITIES_H
#define UTILITIES_H

#include <QObject>
#include <QDebug>

class Utilities : public QObject
{
    Q_OBJECT
public:
    explicit Utilities(QObject *parent = nullptr);
    Q_INVOKABLE QString getInfo1();
    Q_INVOKABLE QString getInfo2();

signals:
};

#endif // UTILITIES_H
