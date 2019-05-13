#include "ControllMainClass.h"
#include "QDebug"
ControllMainClass* ControllMainClass::m_instance = nullptr;
void ControllMainClass::initControllMainAPP()
{
    qDebug() << "Starting show application";
    m_qmlApplicationEngine.load(QUrl(QStringLiteral("qrc:/main.qml")));
}

ControllMainClass *ControllMainClass::getInstance()
{
    if (m_instance == nullptr) {
        m_instance = new ControllMainClass();
    }
    return m_instance;
}

ControllMainClass::ControllMainClass()
{

}
