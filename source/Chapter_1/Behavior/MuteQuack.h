#ifndef HEAD_FIRST_DESIGN_MUTEQUACK_H
#define HEAD_FIRST_DESIGN_MUTEQUACK_H

#include "QuackBehavior.h"

class MuteQuack : public QuackBehavior
{
public:
    void Quack() override;
};

#endif //HEAD_FIRST_DESIGN_MUTEQUACK_H
