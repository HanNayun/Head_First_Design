#ifndef HEAD_FIRST_DESIGN_SOY_H
#define HEAD_FIRST_DESIGN_SOY_H

#include "Chapter_3/Condiments/CondimentDecorator.h"

class Soy : public CondimentDecorator
{
public:
    explicit Soy(std::shared_ptr<Beverage> beverage);

    [[nodiscard]]
    std::string GetDescription() override;

    [[nodiscard]]
    double Cost() override;
};


#endif //HEAD_FIRST_DESIGN_SOY_H
