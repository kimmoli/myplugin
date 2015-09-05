
#ifndef QTestPlugin_H
#define QTestPlugin_H

#include <QObject>
#include <QDBusInterface>
#include <QtCore/QCoreApplication>
#include <QtGui/QKeyEvent>
#include <qpa/qplatforminputcontext.h>

QT_BEGIN_NAMESPACE

class QEvent;

class QTestPlugin : public QPlatformInputContext
{
    Q_OBJECT
public:
    QTestPlugin();
    ~QTestPlugin();

    bool isValid() const;
    bool filterEvent(const QEvent *event);
    void setFocusObject(QObject *object);
    void reset();
    void update(Qt::InputMethodQueries);

};

QT_END_NAMESPACE

#endif // QMEEGOINTEGRATION_H
