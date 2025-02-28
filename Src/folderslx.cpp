#include "Inc/folderslx.h"

FoldersLX::FoldersLX(QObject *parent)
    : QObject{parent}
    ,m_folders{"folder1", "folder2", "folder3"}
{
    qDebug() << "FoldersLX is being created!";
}


QStringList FoldersLX::viewFolder()
{
    qDebug() << "View Folder";
    QDir projectDir = QDir(QCoreApplication::applicationDirPath());
    qDebug() << projectDir;
    projectDir.cdUp();
    projectDir.cd("luxae_binaries");
    if (projectDir.exists()) {
        m_folders = projectDir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
        qDebug() << "Folders in the directory:" << m_folders;
    } else {
        qDebug() << "The directory does not exist.";
    }
    qDebug() << "View Folder";
    return m_folders;
}

void FoldersLX::setFolder(QString folder)
{
    qDebug() << "Set Folder";
    QDir projectDir = QDir(QCoreApplication::applicationDirPath());
    qDebug() << projectDir;
    projectDir.cdUp();
    projectDir.cd("luxae_binaries");
    if (projectDir.exists()) {
        m_folder = projectDir.filePath(folder + "/" + folder + ".jpg");
        m_folder = "file:///" + m_folder;
        qDebug() << "Ruta imagen:" << m_folder;
    } else {
        qDebug() << "Ruta image does not exist.";
    }
    //emit getFolder1(m_folder);
}

QString FoldersLX::getFolder2(void)
{
    qDebug() << "Get Folder 2 " << m_folder;
    return m_folder;
}
