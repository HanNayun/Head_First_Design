#include "Beverage.h"

std::string Beverage::GetDescription()
{
    return _description;
}

void Beverage::SetSize(Beverage::Size size)
{
    _size = size;
}

Beverage::Size Beverage::GetSize()
{
    return _size;
}
