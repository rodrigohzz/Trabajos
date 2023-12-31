#include <list>
#include <curses.h>
#include <Dibujo.hpp>
#include <Ventana.hpp>
#include <Bomberman.hpp>
#include <Bomba.hpp>
#include <Logo.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Logo *logo = new Logo();

    Bomberman *bomberman = new Bomberman(0, 0);

    Bomba *bomba = new Bomba();

    list<Dibujo *> dibujos;
    dibujos.push_back(logo);

    list<Actualizable *> actualizables;
    actualizables.push_back(bomberman);

    while (true)
    {
        int key = getch();
        if (key == 'c' || key == 'C')
        {
            
            dibujos.push_back(bomberman);
            dibujos.remove(logo);
            clear();
        }
        if (key == 'q' || key == 'Q')
            break;
        if (key == 'b' || key == 'B')
        {
            dibujos.push_back(bomba);
        }
        if (key == 'r' || key == 'R')
        {
            dibujos.remove(bomba);
            clear();
        }
        if (key == 'a' || key == KEY_LEFT)
        {
            bomberman->DesplazarIzquierda();
        }
        if (key == 'd' || key == KEY_RIGHT)
        {
            bomberman->DesplazarDerecha();
        }
        if (key == 'w' || key == KEY_UP)
        {
            bomberman->DesplazarArriba();
        }
        if (key == 's' || key == KEY_DOWN)
        {
            bomberman->DesplazarAbajo();
        }

        refresh();

        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    };

    return 0;
}
