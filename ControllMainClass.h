#ifndef CONTROLLMAINCLASS_H
#define CONTROLLMAINCLASS_H

#include <QObject>
#include <QQmlContext>
#include <qqmlapplicationengine.h>

class ControllMainClass : public QObject
{
    Q_OBJECT
public:
    Q_INVOKABLE void initControllMainAPP();
    static ControllMainClass* getInstance();
signals:

public slots:
private:
    ControllMainClass();
    static ControllMainClass* m_instance;
    QQmlApplicationEngine m_qmlApplicationEngine;
};

#endif // CONTROLLMAINCLASS_H
