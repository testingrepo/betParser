#include "tournament.h"

Tournament::Tournament()
{
    pTournamentsList = new QList<Event *>;
    pName = QString::QString();
}

Tournament& Tournament::operator=(const Tournament &rhs)
{
    if (this != &rhs){

        pTournamentsList = rhs.pTournamentsList;
        pName = rhs.pName;
    }
    return *this;

}

Tournament::~Tournament()
{
}

void Tournament::setName(const QString &name)
{
    pName = name;
}

QString Tournament::name()
{
    return pName;
}

QList<Event *> Tournament::events()
{
    return *pTournamentsList;
}

Event Tournament::event(int index)
{
    return *pTournamentsList->value(index);
}

void Tournament::addEvent(Event *event)
{
    pTournamentsList->append(event);
}
