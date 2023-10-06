#ifndef HEAD_FIRST_DESIGN_BEVERAGE_H
#define HEAD_FIRST_DESIGN_BEVERAGE_H

#include <string>

class Beverage
{
public:
    enum Size
    {
        TALL, GRANDE, VENTI
    };

    [[nodiscard]]
    virtual std::string GetDescription();

    [[nodiscard]]
    virtual double Cost() = 0;

    virtual void SetSize(Size size);

    virtual Size GetSize();

protected:
    std::string _description{"Unknown Beverage"};

private:
    Size _size{Size::TALL};
};


#endif //HEAD_FIRST_DESIGN_BEVERAGE_H
