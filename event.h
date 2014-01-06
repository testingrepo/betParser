#ifndef EVENT_H
#define EVENT_H
#include "participant.h"
#include <QList>
#include <QString>

class Event
{
public:
    Event();
    Event &operator=(const Event &rhs);
    ~Event();

    QString time();
    int number();

    void setTime(const QString &time);
    void setNumber(const int &number);

    Participant tie();
    Participant firstParticipant();
    Participant secondParticipant();

    void setTie(Participant *participant);
    void setFirstParticipant(Participant *participant);
    void setSecondParticipant(Participant *participant);

private:

    QString pTime;
    int pNumber;

    Participant *pTie;
    Participant *pFirstParticipant;
    Participant *pSecondParticipant;
};

#endif // EVENT_H
