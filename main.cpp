#include "cron.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cron cron;

    cron.start();
    
    return a.exec();
}
