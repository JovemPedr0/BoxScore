#include <iostream>
#include "Time.h"
#include "Menu.h"

using namespace std;

int main(){

    Menu exemplo;
    Time team_a = Time();
    Time team_b = Time();

    exemplo.show(team_a, team_b);

    return 0;
}
