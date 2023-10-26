#include <list>
#include <curses.h>
#include <Dibujo.hpp>
#include <Ventana.hpp>
#include <Bomberman.hpp>
#include <Bomba.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Bomberman *bomberman = new Bomberman(0, 0);

    Bomba *bomba = new Bomba();

    list<Dibujo *> dibujos;
    dibujos.push_back(bomberman);
    dibujos.push_back(bomba);

    list<Actualizable *> actualizables;
    actualizables.push_back(bomberman);

    while (true)
    {

        int key = getch();
        if (key == 'q' || key == 'Q')
            break;

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
