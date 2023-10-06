#include "gtest/gtest.h"
#include "Chapter_3/Beverage.h"
#include "Chapter_3/Drinks/Espresso.h"
#include "Chapter_3/Drinks/HouseBlend.h"
#include "Chapter_3/Drinks/DarkRoast.h"
#include "Chapter_3/Condiments/Mocha.h"
#include "Chapter_3/Condiments/Whip.h"
#include "Chapter_3/Condiments/Soy.h"

TEST(Chapter_3, Test_Decorator)
{
    std::shared_ptr<Beverage> espresso = std::make_shared<Espresso>();
    espresso->SetSize(Beverage::Size::VENTI);
    std::cout << "Order: " << espresso->GetDescription() << std::endl
              << "Cost: " << espresso->Cost() << std::endl << std::endl;

    std::shared_ptr<Beverage> house_blend = std::make_shared<HouseBlend>();
    house_blend->SetSize(Beverage::Size::GRANDE);
    house_blend = std::make_shared<Mocha>(house_blend);
    house_blend = std::make_shared<Soy>(house_blend);
    house_blend = std::make_shared<Whip>(house_blend);

    house_blend = std::dynamic_pointer_cast<Whip>(house_blend);
    std::cout << "Order: " << house_blend->GetDescription() << std::endl
              << "Cost: " << house_blend->Cost() << std::endl << std::endl;

    std::shared_ptr<Beverage> dark_roast = std::make_shared<DarkRoast>();
    dark_roast = std::make_shared<Mocha>(dark_roast);
    dark_roast = std::make_shared<Mocha>(dark_roast);
    dark_roast = std::make_shared<Whip>(dark_roast);
    std::cout << "Order: " << dark_roast->GetDescription() << std::endl
              << "Cost: " << dark_roast->Cost() << std::endl << std::endl;
}