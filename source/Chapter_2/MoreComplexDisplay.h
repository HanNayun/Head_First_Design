#ifndef HEAD_FIRST_DESIGN_MORECOMPLEXDISPLAY_H
#define HEAD_FIRST_DESIGN_MORECOMPLEXDISPLAY_H

#include <memory>
#include <limits>

#include "Interface/Observer.h"
#include "Interface/DisplayElement.h"
#include "Interface/Subject.h"
#include "WeatherData.h"

class MoreComplexDisplay : public Observer, public DisplayElement
{
private :
    std::shared_ptr<WeatherData> _weather_data;

    int _update_time{};

    float _temperature{};
    float _max_temperature = std::numeric_limits<float>::min();
    float _min_temperature = std::numeric_limits<float>::max();
    float _sum_temperature{};

    float _humidity{};
    float _max_humidity = std::numeric_limits<float>::min();
    float _min_humidity = std::numeric_limits<float>::max();
    float _sum_humidity{};

    float _pressure{};
    float _max_pressure = std::numeric_limits<float>::min();
    float _min_pressure = std::numeric_limits<float>::max();
    float _sum_pressure{};

public:
    explicit MoreComplexDisplay(std::shared_ptr<WeatherData> weather_data);

    void Update() override;

    void Display() override;
};


#endif //HEAD_FIRST_DESIGN_MORECOMPLEXDISPLAY_H
