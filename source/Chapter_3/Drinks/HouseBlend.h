#ifndef HEAD_FIRST_DESIGN_HOUSEBLEND_H
#define HEAD_FIRST_DESIGN_HOUSEBLEND_H

#include "Chapter_3/Beverage.h"

class HouseBlend : public Beverage
{
public:
    HouseBlend();

    [[nodiscard]]
    double Cost() override;
};


#endif //HEAD_FIRST_DESIGN_HOUSEBLEND_H
