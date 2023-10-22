#pragma once
#include "Dibujo.hpp"
#include "Actualizable.hpp"

class Personaje : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Personaje(/* args */) : Dibujo("perbom")
    {
    }
    Personaje(int x, int y) : Dibujo(x, y, "perbom")
    {

    }
    void Actualizar()
    {
        this->x += 1;
        //this->y += 1;
    }
    ~Personaje()
    {
        
    }
};