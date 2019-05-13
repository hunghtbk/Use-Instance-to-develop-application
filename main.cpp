#include <QGuiApplication>
#include <ControllMainClass.h>
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    ControllMainClass::getInstance()->initControllMainAPP();

    return app.exec();
}
