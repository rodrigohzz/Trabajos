#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <curses.h>

class Dibujo
{
private:
    std::fstream archivo;

protected:
    int x;
    int y;

public:
    Dibujo(int x, int y, std::string recurso)
    {
        archivo.open("./data/" + recurso + ".txt");
        this->x = x;
        this->y = y;
    }
    Dibujo(std::string recurso)
    {
        archivo.open("./data/" + recurso + ".txt");
        this->x = 0;
        //this->y = 0;
    }
    void Dibujar()
    {
        std::string linea;
        move(this->x, this->y);

        while (std::getline(archivo, linea))
        {
            int y = getcury(stdscr);
            mvaddstr(
                y + 1,
                this->x,
                linea.c_str());
        }
        archivo.clear();
        archivo.seekg(0);
    }

    ~Dibujo()
    {
        archivo.close();
    }
};