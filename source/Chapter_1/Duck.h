#ifndef HEAD_FIRST_DESIGN_DUCK_H
#define HEAD_FIRST_DESIGN_DUCK_H

#include "Chapter_1/Behavior/FlyBehavior.h"
#include "Chapter_1/Behavior/QuackBehavior.h"

class Duck
{
private:
    FlyBehavior *_fly_behavior;
    QuackBehavior *_quack_behavior;

public :
    explicit Duck(FlyBehavior *fly_behavior = nullptr, QuackBehavior *quack_behavior = nullptr);

    void PerformFly();

    void PerformQuack();

    void SetFlyBehavior(FlyBehavior *behavior);

    void SetQuackBehavior(QuackBehavior *behavior);
};

#endif //HEAD_FIRST_DESIGN_DUCK_H
