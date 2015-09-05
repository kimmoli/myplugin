
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

bool QTestPlugin::filterEvent(const QEvent *event)
{
    QKeyEvent *keyEvent = (QKeyEvent *)event;

    if (keyEvent->type() != QEvent::KeyPress)
    {
        return false;
    }

    int keyval = keyEvent->key();
    QString text = keyEvent->text();

    qDebug() << "key" << keyval << text;

    return false;
}

bool QTestPlugin::isValid() const
{
    return true;
}

void QTestPlugin::update(Qt::InputMethodQueries q)
{
    QPlatformInputContext::update(q);
}

void QTestPlugin::reset()
{

}

void QTestPlugin::setFocusObject(QObject *object)
{
    Q_UNUSED(object);
}

