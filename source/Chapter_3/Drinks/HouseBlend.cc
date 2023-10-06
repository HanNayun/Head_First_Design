#include "HouseBlend.h"

HouseBlend::HouseBlend()
{
    _description = "House Blend Coffee";
}

double HouseBlend::Cost()
{
    auto size = GetSize();
    switch (size)
    {
        case Beverage::Size::TALL:
            return 3.2;
        case Beverage::Size::GRANDE:
            return 4.2;
        case Beverage::Size::VENTI:
            return 5.2;
        default:
            return 3.2;
    }
}
