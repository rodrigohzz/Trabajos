#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <list>

using namespace std;

class Logo : public Dibujo
{
private:

public:
    Logo() : Dibujo("logo"){}
    ~Logo() {}
    void Actualizar()
    {
    }
};