project(source)

set(SOURCE_FILES
        Chapter_1/Behavior/FlyBehavior.h
        Chapter_1/Behavior/QuackBehavior.h
        Chapter_1/Duck.h
        Chapter_1/Duck.cc
        Chapter_1/Behavior/FlyWithWings.h
        Chapter_1/Behavior/FlyWithWings.cc
        Chapter_1/Behavior/CanNotFly.h
        Chapter_1/Behavior/CanNotFly.cc
        Chapter_1/Behavior/QuackLoud.cc
        Chapter_1/Behavior/QuackLoud.h
        Chapter_1/Behavior/MuteQuack.cc
        Chapter_1/Behavior/MuteQuack.h
        Chapter_1/Behavior/Squeak.cc
        Chapter_1/Behavior/Squeak.h
        Chapter_2/Interface/Subject.h
        Chapter_2/Interface/Observer.h
        Chapter_2/Interface/DisplayElement.h
        Chapter_2/WeatherData.cc
        Chapter_2/WeatherData.h
        Chapter_2/CurrentWeatherConditionsDisplay.cc
        Chapter_2/CurrentWeatherConditionsDisplay.h
        Chapter_2/MoreComplexDisplay.cc
        Chapter_2/MoreComplexDisplay.h
)

add_library(source STATIC ${HEADER_FILES} ${SOURCE_FILES})