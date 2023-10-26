#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <Bomba.hpp>

class Bomberman : public Dibujo, public Actualizable
{
private:
    Bomba *bomba;
public:
    Bomberman() : Dibujo("perbomb")
    {
    }
    Bomberman(int x, int y) : Dibujo(x, y, "perbomb")
    {
    }
    void Actualizar()
    {
        // this->x +=1;
    }

    void DesplazarIzquierda()
    {
        this->x -= 1;
    }
    void DesplazarDerecha()
    {
        this->x += 1;
    }
    void DesplazarArriba()
    {
        this->y -= 1;
    }
    void DesplazarAbajo()
    {
        this->y += 1;
    }
};