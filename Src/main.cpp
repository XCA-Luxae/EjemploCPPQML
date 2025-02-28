#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "Inc/cppproperty.h"
#include "Inc/objectqml.h"
#include "Inc/utilities.h"
#include "Inc/folderslx.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<Utilities>("Utility", 1, 0, "Utilities");
    qmlRegisterType<CppProperty>("Counter", 1, 0, "CppProperty");
    //qmlRegisterType<FoldersLX>("Folders", 1, 0, "FoldersLX");

    FoldersLX foldersLX;
    ObjectQML objectQML;

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/EjemploCPPQML/Qml/main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);
    engine.load(url);

    QQmlContext *rootContext = engine.rootContext();
    rootContext->setContextProperty("objectQML", &objectQML);
    rootContext->setContextProperty("foldersLX", &foldersLX);

    return app.exec();
}
