#include "DarkRoast.h"

DarkRoast::DarkRoast()
{
    _description = "Dark Roast Coffee";
}

double DarkRoast::Cost()
{
    auto size = GetSize();
    switch (size)
    {
        case Beverage::Size::TALL:
            return 3.0;
        case Beverage::Size::GRANDE:
            return 4.0;
        case Beverage::Size::VENTI:
            return 5.0;
        default:
            return 3.0;
    }
}
