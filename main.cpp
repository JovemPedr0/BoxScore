#include <iostream>
#include "Time.h"
#include "Boxscore.h"
#include "Menu.h"
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    Menu exemplo;
    Time team_a = Time();
    Time team_b = Time();
    Boxscore total = Boxscore();

    exemplo.show(team_a, team_b, total);

    return 0;
}
