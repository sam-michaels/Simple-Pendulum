#pragma once

#ifndef SIMPLE_PENDULUM_PENDULUM_H
#define SIMPLE_PENDULUM_PENDULUM_H

#include <SFML/Graphics.hpp>

class pendulum {
private:
    pendulum(double len, double ang);

    double length{};
    double angle {};
    double angularVelocity{ 0 };
    const float g { 9.81 }
public:
    pendulum(double len, double ang) :
            length{ len },
            angle{ ang };

    void update(float time);
};


#endif //SIMPLE_PENDULUM_PENDULUM_H

