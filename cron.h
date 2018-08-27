#ifndef CRON_H
#define CRON_H

#include <QTimer>

class Cron : public QObject
{
    Q_OBJECT
public:
    explicit Cron();

    void start();

private:
    QTimer *timer;

private slots:
    void tick();
};

#endif // CRON_H
