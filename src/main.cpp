
#include <QtGui/qgenericplugin.h>
#include <src/qtestplugin.h>

QT_BEGIN_NAMESPACE

class QMyPlugin : public QGenericPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QGenericPluginFactoryInterface_iid FILE "myplugin.json")

public:
    QObject *create(const QString &name, const QString &spec);
};

QObject * QMyPlugin::create(const QString &name, const QString &spec)
{
    Q_UNUSED(spec);

    if (!name.compare(QLatin1String("MyPlugin"), Qt::CaseInsensitive))
        return new QTestPlugin();

    return 0;
}

QT_END_NAMESPACE

#include "main.moc"
