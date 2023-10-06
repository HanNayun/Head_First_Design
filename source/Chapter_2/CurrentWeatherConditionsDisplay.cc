#include <utility>
#include <iostream>

#include "CurrentWeatherConditionsDisplay.h"


CurrentWeatherConditionsDisplay::CurrentWeatherConditionsDisplay(std::shared_ptr<WeatherData> weather_data)
{
    _weather_data = std::move(weather_data);
    _weather_data->RegisterObserver(*this);
}

CurrentWeatherConditionsDisplay::~CurrentWeatherConditionsDisplay()
{
    _weather_data->RemoveObserver(*this);
}

void CurrentWeatherConditionsDisplay::Update()
{
    _temperature = _weather_data->GetTemperature();
    _humidity = _weather_data->GetHumidity();
    _pressure = _weather_data->GetPressure();

    Display();
}

void CurrentWeatherConditionsDisplay::Display()
{
    std::cout << "Current weather condition:" << std::endl
              << "Temperature: " << _temperature << std::endl
              << "Humidity: " << _humidity << std::endl
              << "Pressure: " << _pressure << std::endl
              << "Heat index:" << _temperature + _humidity + _pressure << std::endl;
}


