#ifndef BOXSCORE_H
#define BOXSCORE_H
#include "Time.h"

class Boxscore{
    public:
        Boxscore();
        int nPontuacaoTimeA = 0;
        int nPontuacaoTimeB = 0;
        void getPtsTotal(Time team_a, Time team_b);
        void getResumoJogo(Time team_a);
        void SalvaBoxscore(Time team_a, Time team_b);
};


#endif
