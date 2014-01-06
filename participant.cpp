#include "participant.h"

Participant::Participant()
{
    pName = "";
    pValue = 0.0;
}

Participant::Participant(const QString &name, double value)
{
    pName = name;
    pValue = value;
}

QString Participant::name()
{
    return pName;
}

double Participant::value()
{
    return pValue;
}

QString Participant::valueToStr()
{
    return QString::number(pValue);
}

void Participant::setName(const QString &name)
{
    pName = name;
}

void Participant::setValue(double value)
{
    pValue = value;
}
