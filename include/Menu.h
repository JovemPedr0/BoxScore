#ifndef MENU_H
#define MENU_H
#include "Time.h"

class Menu
{
    public:
        Menu();
        int a, b, L, L2;

        void gotoxy(int x, int y);
        int show(Time team_a, Time team_b);

};

#endif // MENU_H
