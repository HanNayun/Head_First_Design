#include "Mocha.h"

Mocha::Mocha(std::shared_ptr<Beverage> beverage)
{
    _beverage = std::move(beverage);
}

double Mocha::Cost()
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

std::string Mocha::GetDescription()
{
    return _beverage->GetDescription() + ", Mocha";
}
