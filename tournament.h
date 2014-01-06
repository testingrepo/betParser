#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include <QString>
#include <QList>
#include "event.h"


class Tournament
{
public:


    Tournament();
    Tournament &operator=(const Tournament &newTour);
    ~Tournament();



    void setName(const QString &name);
    QString name();
    QList<Event *> events();
    Event event(int index);
    void addEvent(Event *event);

private:
    QString pName;
    QList<Event *> *pTournamentsList;
};

#endif // TOURNAMENT_H
