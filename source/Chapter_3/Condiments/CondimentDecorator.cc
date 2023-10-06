#include "CondimentDecorator.h"

Beverage::Size CondimentDecorator::GetSize()
{
    return _beverage->GetSize();
}
