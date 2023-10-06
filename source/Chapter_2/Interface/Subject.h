#ifndef HEAD_FIRST_DESIGN_SUBJECT_H
#define HEAD_FIRST_DESIGN_SUBJECT_H

#include "Observer.h"

class Subject
{
public:
    virtual void RegisterObserver(Observer& observer) = 0;

    virtual void RemoveObserver(Observer& observer) = 0;

    virtual void NotifyObserver() = 0;
};

#endif //HEAD_FIRST_DESIGN_SUBJECT_H
