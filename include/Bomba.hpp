#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <list>

using namespace std;

class Bomba : public Dibujo
{
private:
    int numeroBombas;

public:
    Bomba() : Dibujo("bomba")
    {
        this->numeroBombas = 5;
    }
    ~Bomba() {}
    void Actualizar()
    {
    }
};