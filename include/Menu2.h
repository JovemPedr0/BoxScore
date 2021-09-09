#ifndef MENU2_H
#define MENU2_H


class Menu2{
    public:
        Menu2();
        int a, b, L, L2;

        void gotoxy(int x, int y);
        int show(Time team_a, Time team_b, Boxscore total);

};

#endif // MENU_H
