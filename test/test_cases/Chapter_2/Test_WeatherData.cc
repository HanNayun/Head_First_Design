#include "gtest/gtest.h"
#include "Chapter_2/WeatherData.h"
#include "Chapter_2/CurrentWeatherConditionsDisplay.h"
#include "Chapter_2/MoreComplexDisplay.h"

TEST(Test_WeatherData, Test_CurrentDisplay)
{
    auto weather_data = std::make_shared<WeatherData>();
    auto current_weather_conditions_display = CurrentWeatherConditionsDisplay(weather_data);

    std::cout << "Test output Test_WeatherData.Test_CurrentDisplay:" << std::endl
              << "====================================" << std::endl;

    weather_data->SetMeasurements(80, 65, 30.4f);
    weather_data->SetMeasurements(82, 70, 29.2f);
    weather_data->SetMeasurements(78, 90, 29.2f);

    std::cout << std::endl;
}

TEST(Test_WeatherData, Test_Complex_Display)
{
    auto weather_data = std::make_shared<WeatherData>();
    auto complex_display = MoreComplexDisplay(weather_data);

    std::cout << "Test output Test_WeatherData.Test_Complex_Display:" << std::endl
              << "====================================" << std::endl;

    weather_data->SetMeasurements(80.f, 80.f, 80.f);
    weather_data->SetMeasurements(100.f, 120.f, 100.f);
    weather_data->SetMeasurements(120.f, 100.f, 120.f);

    std::cout << std::endl;
}