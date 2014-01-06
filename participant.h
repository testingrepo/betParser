#ifndef PARTICIPANT_H
#define PARTICIPANT_H
#include <QString>

class Participant
{
public:
    Participant();
    Participant(const QString &name, double value);

    QString name();
    double value();
    QString valueToStr();

    void setName(const QString &name);
    void setValue(double value);

private:
    QString pName;
    double pValue;

};

#endif // PARTICIPANT_H
