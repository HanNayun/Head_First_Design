#include "Espresso.h"

Espresso::Espresso()
{
    _description = "Espresso";
}

double Espresso::Cost()
{
    auto size = GetSize();
    switch (size)
    {
        case Beverage::Size::TALL:
            return 3.1;
        case Beverage::Size::GRANDE:
            return 4.1;
        case Beverage::Size::VENTI:
            return 5.1;
        default:
            return 3.1;
    }
}
