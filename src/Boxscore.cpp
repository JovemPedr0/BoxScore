#include "Boxscore.h"
#include "Time.h"

Boxscore::Boxscore(){

}

void Boxscore::getPtsTotal(Time team_a, Time team_b){
    for(int i = 0; i < MAX_JOGADORES; i++){
        nPontuacaoTimeA += team_a.nPontosMarcados[i];
        nPontuacaoTimeB += team_b.nPontosMarcados[i];
    }

    printf("%s X %s\n", team_a.nomeTime, team_b.nomeTime);
    printf("%d X %d \n", nPontuacaoTimeA, nPontuacaoTimeB);
} 

    