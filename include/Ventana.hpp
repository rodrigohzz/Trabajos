#include <curses.h>
#include <unistd.h>
#include <list>
#include <Actualizable.hpp>

using namespace std;

class Ventana
{
private:
    /* data */
public:
    Ventana(/* args */)
    {
        initscr();
        noecho();
        curs_set(FALSE);
        nocbreak();
        keypad(stdscr, TRUE);
        timeout(10);
    }
    void Actualizar(list<Actualizable *> actualizables)
    {
        for (auto &&dibujo : actualizables)
        {
            dibujo->Actualizar();
        }

        usleep(41000);
    }

    void Dibujar(list<Dibujo *> dibujos)
    {
        clear();
        for (auto &&dibujo : dibujos)
        {
            dibujo->Dibujar();
        }

        box(stdscr, 'R', 'A');
        refresh();
    }

    ~Ventana()
    {
        keypad(stdscr, FALSE);
        endwin();
    }
};