//
// Created by HanNayun on 2023/10/4.
//

#ifndef HEAD_FIRST_DESIGN_QUACKLOUD_H
#define HEAD_FIRST_DESIGN_QUACKLOUD_H

#include "QuackBehavior.h"

class QuackLoud : public QuackBehavior
{
public:
    void Quack() override;
};

#endif //HEAD_FIRST_DESIGN_QUACKLOUD_H
