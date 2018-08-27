#include "cron.h"

#include <QProcess>

Cron::Cron() : QObject()
{
    timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), SLOT(tick()));
}

void Cron::start()
{
    timer->start(4000);
}

void Cron::tick()
{
    QProcess::startDetached("php steal.php");
}
