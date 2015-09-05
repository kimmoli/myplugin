
#include <qpa/qplatforminputcontextplugin_p.h>
#include <src/qtestplugin.h>
#include <QtCore/QStringList>
#include <QDebug>

QT_BEGIN_NAMESPACE

class QMyPlugin : public QPlatformInputContextPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QPlatformInputContextFactoryInterface_iid FILE "myplugin.json")

public:
    QPlatformInputContext *create(const QString &system, const QStringList &paramList);
};

QPlatformInputContext *QMyPlugin::create(const QString &system, const QStringList &paramList)
{
    Q_UNUSED(paramList);

    qDebug() << system;

    if (!system.compare(QLatin1String("MyPlugin"), Qt::CaseInsensitive))
        return new QTestPlugin;

    return 0;
}

QT_END_NAMESPACE

#include "main.moc"
