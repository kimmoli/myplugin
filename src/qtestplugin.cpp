
#include "qtestplugin.h"

#include <QDebug>
#include <QDBusConnection>
#include <QDBusArgument>
#include <qguiapplication.h>
#include <qpa/qwindowsysteminterface.h>

QTestPlugin::QTestPlugin()
{
    qDebug() << "hoplaa. starting my test plugin!";
}

QTestPlugin::~QTestPlugin()
{
    qDebug() << "bye";
}
