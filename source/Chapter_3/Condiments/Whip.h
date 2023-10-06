#ifndef HEAD_FIRST_DESIGN_WHIP_H
#define HEAD_FIRST_DESIGN_WHIP_H

#include "Chapter_3/Condiments/CondimentDecorator.h"

class Whip : public CondimentDecorator
{
public:
    explicit Whip(std::shared_ptr<Beverage> beverage);

    [[nodiscard]]
    std::string GetDescription() override;

    [[nodiscard]]
    double Cost() override;
};


#endif //HEAD_FIRST_DESIGN_WHIP_H
