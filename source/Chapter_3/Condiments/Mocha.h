#ifndef HEAD_FIRST_DESIGN_MOCHA_H
#define HEAD_FIRST_DESIGN_MOCHA_H

#include "Chapter_3/Condiments/CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
    explicit Mocha(std::shared_ptr<Beverage> beverage);

    [[nodiscard]]
    std::string GetDescription() override;

    [[nodiscard]]
    double Cost() override;
};


#endif //HEAD_FIRST_DESIGN_MOCHA_H
