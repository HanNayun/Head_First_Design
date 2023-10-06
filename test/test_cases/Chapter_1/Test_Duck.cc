#include "gtest/gtest.h"
#include "Chapter_1/Duck.h"
#include "Chapter_1/Behavior/CanNotFly.h"
#include "Chapter_1/Behavior/Squeak.h"

TEST(Test_Duck, Test_Default_Behavior)
{
    std::cout << "Test output Test_Duck.Test_Default_Behavior:" << std::endl
              << "============================================" << std::endl;
    auto duck = Duck();
    duck.PerformFly(); // I'm flying with wings!
    duck.PerformQuack(); // QuackLoud

    std::cout << std::endl;
}

TEST(Test_Duck, Test_Change_Behavior)
{
    auto duck = Duck();
    std::cout << "Test output Test_Duck.Test_Change_Behavior:" << std::endl
              << "===========================================" << std::endl;

    duck.PerformFly(); // I'm flying with wings!
    duck.PerformQuack(); // QuackLoud

    FlyBehavior* fly_behavior = new CanNotFly();
    QuackBehavior* quack_behavior = new Squeak();
    duck.SetFlyBehavior(fly_behavior);
    duck.SetQuackBehavior(quack_behavior);

    duck.PerformFly(); // I can not fly
    duck.PerformQuack(); // Squeak

    std::cout << std::endl;
}