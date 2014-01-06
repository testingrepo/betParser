#include "event.h"

Event::Event()
{
    pFirstParticipant = 0;
    pSecondParticipant = 0;
    pTime = "";
    pNumber = 0;
}

Event& Event::operator=(const Event &rhs)
{
    if(this != &rhs){

        pFirstParticipant = rhs.pFirstParticipant;
        pSecondParticipant = rhs.pSecondParticipant;
        pTime = rhs.pTime;
        pNumber = rhs.pNumber;
    }

    return *this;
}

Event::~Event()
{
//    delete pFirstParticipant;
//    delete pSecondParticipant;
}

QString Event::time()
{
    return 0;
}

int Event::number()
{
    return 0;
}

void Event::setTime(const QString &time)
{
    pTime = time;
}

void Event::setNumber(const int &number)
{
    pNumber = number;
}

Participant Event::firstParticipant()
{
    if (pFirstParticipant != 0) {
        return *pFirstParticipant;
    }else{
        return Participant::Participant();
    }
}

Participant Event::secondParticipant()
{
    if (pSecondParticipant != 0) {
        return *pSecondParticipant;
    }else{
        return Participant::Participant();
    }
}

void Event::setTie(Participant *participant)
{
    pTie = participant;
}

void Event::setFirstParticipant(Participant *participant)
{
    pFirstParticipant = participant;
}

void Event::setSecondParticipant(Participant *participant)
{
    pSecondParticipant = participant;
}
