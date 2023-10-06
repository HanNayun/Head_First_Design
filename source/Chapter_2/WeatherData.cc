//
// Created by HanNayun on 2023/10/5.
//

#include "WeatherData.h"

WeatherData::WeatherData()
{
    _observers = std::make_unique<std::set<Observer *>>();
}

WeatherData::~WeatherData()
{
    _observers->clear();
}

void WeatherData::RegisterObserver(Observer &observer)
{
    _observers->emplace(&observer);
}

void WeatherData::RemoveObserver(Observer &observer)
{
    _observers->erase(&observer);
}

void WeatherData::NotifyObserver()
{
    for (auto &observer: *_observers)
    {
        observer->Update();
    }
}

float WeatherData::GetTemperature() const
{
    return _temperature;
}

float WeatherData::GetPressure() const
{
    return _pressure;
}

float WeatherData::GetHumidity() const
{
    return _humidity;
}

void WeatherData::SetMeasurements(float temperature, float humidity, float pressure)
{
    _temperature = temperature;
    _humidity = humidity;
    _pressure = pressure;

    NotifyObserver();
}


