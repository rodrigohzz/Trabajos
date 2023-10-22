#pragma once
#include "Enemigo.hpp"
#include "Actualizable.hpp"

class Pass : public Enemigo, public Actualizable
{
private:
    /* data */
public:
    Pass(/* args */) {}
    ~Pass() {}
};