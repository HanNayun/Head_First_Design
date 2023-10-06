#ifndef HEAD_FIRST_DESIGN_CURRENTWEATHERCONDITIONSDISPLAY_H
#define HEAD_FIRST_DESIGN_CURRENTWEATHERCONDITIONSDISPLAY_H

#include <memory>

#include "Chapter_2/Interface/Observer.h"
#include "Chapter_2/Interface/DisplayElement.h"
#include "Chapter_2/Interface/Subject.h"
#include "WeatherData.h"

class CurrentWeatherConditionsDisplay : public Observer, public DisplayElement
{
private:
    std::shared_ptr<WeatherData> _weather_data;
    float _temperature{};
    float _humidity{};
    float _pressure{};

public:
    explicit CurrentWeatherConditionsDisplay(std::shared_ptr<WeatherData> weather_data);

    ~CurrentWeatherConditionsDisplay();

    void Update() override;

    void Display() override;
};

#endif //HEAD_FIRST_DESIGN_CURRENTWEATHERCONDITIONSDISPLAY_H
