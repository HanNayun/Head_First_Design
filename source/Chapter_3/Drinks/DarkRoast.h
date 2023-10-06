#ifndef HEAD_FIRST_DESIGN_DARKROAST_H
#define HEAD_FIRST_DESIGN_DARKROAST_H

#include "Chapter_3/Beverage.h"

class DarkRoast : public Beverage
{
public:
    DarkRoast();

    [[nodiscard]]
    double Cost() override;
};


#endif //HEAD_FIRST_DESIGN_DARKROAST_H
