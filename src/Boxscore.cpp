#include "Boxscore.h"
#include "Time.h"

Boxscore::Boxscore(){

}

void Boxscore::getPtsTotal(Time team_a, Time team_b){
    for(int i = 0; i < MAX_JOGADORES; i++){
        nPontuacaoTimeA += team_a.nPontosMarcados[i];
        nPontuacaoTimeB += team_b.nPontosMarcados[i];
    }

    printf("%s x %s\n", team_a, team_b);
    printf("%d x %d\n", nPontuacaoTimeA, nPontuacaoTimeB);
} 

    