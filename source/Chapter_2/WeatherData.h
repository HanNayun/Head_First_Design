#ifndef HEAD_FIRST_DESIGN_WEATHERDATA_H
#define HEAD_FIRST_DESIGN_WEATHERDATA_H

#include <set>

#include "Chapter_2/Interface/Subject.h"
#include "Chapter_2/Interface/Observer.h"

class WeatherData : public Subject
{
private:
    std::unique_ptr<std::set<Observer *>> _observers;
    float _temperature{};
    float _humidity{};
    float _pressure{};

public:
    WeatherData();

    ~WeatherData();

    void RegisterObserver(Observer &observer) override;

    void RemoveObserver(Observer &observer) override;

    void NotifyObserver() override;

    void SetMeasurements(float temperature, float humidity, float pressure);

    [[nodiscard]] float GetTemperature() const;

    [[nodiscard]] float GetHumidity() const;

    [[nodiscard]] float GetPressure() const;
};

#endif //HEAD_FIRST_DESIGN_WEATHERDATA_H
