#include "Soy.h"

#include <utility>

Soy::Soy(std::shared_ptr<Beverage> beverage)
{
    _beverage = std::move(beverage);
}

std::string Soy::GetDescription()
{
    return _beverage->GetDescription() + ", Soy";
}

double Soy::Cost()
{
    auto size = _beverage->GetSize();
    double cost = 0;
    switch (size)
    {
        case Beverage::Size::TALL:
            cost = 0.5;
            break;
        case Beverage::Size::GRANDE:
            cost = 1.0;
            break;
        case Beverage::Size::VENTI:
            cost = 1.5;
            break;
        default:
            cost = 0.5;
    }

    return _beverage->Cost() + cost;
}
