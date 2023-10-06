#ifndef HEAD_FIRST_DESIGN_ESPRESSO_H
#define HEAD_FIRST_DESIGN_ESPRESSO_H

#include "Chapter_3/Beverage.h"

class Espresso : public Beverage
{
public :
    Espresso();

    [[nodiscard]]
    double Cost() override;
};


#endif //HEAD_FIRST_DESIGN_ESPRESSO_H
