#include <iostream>
#include "Time.h"
#include "Boxscore.h"
#include "Menu.h"

using namespace std;

int main(){

    Menu exemplo;
    Time team_a = Time();
    Time team_b = Time();
    Boxscore total = Boxscore();

    exemplo.show(team_a, team_b, total);

    return 0;
}
