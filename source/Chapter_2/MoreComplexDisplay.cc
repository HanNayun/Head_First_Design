#include <iostream>

#include "MoreComplexDisplay.h"

MoreComplexDisplay::MoreComplexDisplay(std::shared_ptr<WeatherData> weather_data)
{
    _weather_data = std::move(weather_data);
    _weather_data->RegisterObserver(*this);
}

void MoreComplexDisplay::Update()
{
    _update_time++;

    _temperature = _weather_data->GetTemperature();
    _max_temperature = std::fmax(_max_temperature, _temperature);
    _min_temperature = std::fmin(_min_temperature, _temperature);
    _sum_temperature += _temperature;

    _humidity = _weather_data->GetHumidity();
    _max_humidity = std::fmax(_max_humidity, _humidity);
    _min_humidity = std::fmin(_min_humidity, _humidity);
    _sum_humidity += _humidity;

    _pressure = _weather_data->GetPressure();
    _max_pressure = std::fmax(_max_pressure, _pressure);
    _min_pressure = std::fmin(_min_pressure, _pressure);
    _sum_pressure += _pressure;

    Display();
}

void MoreComplexDisplay::Display()
{
    std::cout << "MoreComplexDisplay: " << std::endl
              << "Temperature Cur/Max/Min/Average: " << _temperature << "/" << _max_temperature << "/"
              << _min_temperature << "/" << _sum_temperature / float(_update_time) << std::endl
              << "Humidity Cur/Max/Min/Average: " << _humidity << "/" << _max_humidity << "/" << _min_humidity << "/"
              << _sum_humidity / float(_update_time) << std::endl
              << "Pressure Cur/Max/Min/Average: " << _pressure << "/" << _max_pressure << "/" << _min_pressure << "/"
              << _sum_pressure / float(_update_time) << std::endl;
}
