
#include <qpa/qplatforminputcontextplugin_p.h>
#include <src/qtestplugin.h>
#include <QtCore/QStringList>

QT_BEGIN_NAMESPACE

class QMyPlugin : public QPlatformInputContextPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QPlatformInputContextFactoryInterface_iid FILE "myplugin.json")

public:
    QTestPlugin *create(const QString &system, const QStringList &paramList);
};

QTestPlugin * QMyPlugin::create(const QString &system, const QStringList &paramList)
{
    Q_UNUSED(paramList);

    if (!system.compare(QLatin1String("MyPlugin"), Qt::CaseInsensitive))
        return new QTestPlugin;

    return 0;
}

QT_END_NAMESPACE

#include "main.moc"
