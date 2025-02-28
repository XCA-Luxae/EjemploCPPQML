#ifndef FOLDERSLX_H
#define FOLDERSLX_H

#include <QObject>
#include <QDebug>
#include <QDir>
#include <QVariant>
#include <QDesktopServices>
#include <QCoreApplication>

class FoldersLX : public QObject
{
    Q_OBJECT
public:
    explicit FoldersLX(QObject *parent = nullptr);

public slots:
    Q_INVOKABLE QStringList viewFolder();
    Q_INVOKABLE void setFolder(QString folder);
    Q_INVOKABLE QString getFolder2(void);
    

signals:
    void getFolder(QStringList folders);
    void getFolder1(QString folder);

private:
    QStringList m_folders;
    QString m_folder;

};

#endif // FOLDERSLX_H
