#include "Duck.h"
#include "Chapter_1/Behavior/FlyWithWings.h"
#include "Chapter_1/Behavior/QuackLoud.h"

void Duck::PerformFly()
{
    _fly_behavior->Fly();
}

void Duck::PerformQuack()
{
    _quack_behavior->Quack();
}

void Duck::SetFlyBehavior(FlyBehavior *behavior)
{
    _fly_behavior = behavior;
}

void Duck::SetQuackBehavior(QuackBehavior *behavior)
{
    _quack_behavior = behavior;
}

Duck::Duck(FlyBehavior *fly_behavior, QuackBehavior *quack_behavior)
{

    _fly_behavior = fly_behavior == nullptr
                    ? new FlyWithWings()
                    : fly_behavior;
    _quack_behavior = quack_behavior == nullptr
                      ? new QuackLoud()
                      : quack_behavior;
}


