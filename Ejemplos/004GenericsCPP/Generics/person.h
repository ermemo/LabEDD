#ifndef PERSON_H
#define PERSON_H
#include <QString>

class Person
{
public:
    Person();
    Person(QString firstName, QString lastName, QString career);
    QString getPresentation();
    QString toString();
    int compare(Person another);
private:
    QString firstName;
    QString lastName;
    QString career;
};

#endif // PERSON_H
