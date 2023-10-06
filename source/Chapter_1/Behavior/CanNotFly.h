#ifndef HEAD_FIRST_DESIGN_CANNOTFLY_H
#define HEAD_FIRST_DESIGN_CANNOTFLY_H

#include "FlyBehavior.h"

class CanNotFly : public FlyBehavior
{
public:
    void Fly() override;
};

#endif //HEAD_FIRST_DESIGN_CANNOTFLY_H
