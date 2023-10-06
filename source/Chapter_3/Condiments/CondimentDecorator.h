#ifndef HEAD_FIRST_DESIGN_CONDIMENTDECORATOR_H
#define HEAD_FIRST_DESIGN_CONDIMENTDECORATOR_H

#include <memory>

#include "Chapter_3/Beverage.h"

class CondimentDecorator : public Beverage
{
protected:
    std::shared_ptr<Beverage> _beverage;

public:
    [[nodiscard]]
    std::string GetDescription() override = 0;

    Size GetSize() override;
};


#endif //HEAD_FIRST_DESIGN_CONDIMENTDECORATOR_H
  