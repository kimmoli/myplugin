
#ifndef QTestPlugin_H
#define QTestPlugin_H

#include <QObject>
#include <QtCore/QCoreApplication>
#include <QtGui/qgenericplugin.h>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE

class QTestPlugin : public QObject
{
    Q_OBJECT
public:
    QTestPlugin();
    ~QTestPlugin();
};

QT_END_NAMESPACE

#endif // QMEEGOINTEGRATION_H
