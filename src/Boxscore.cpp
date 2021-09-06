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

void Boxscore::getResumoJogo(Time team_a){
    printf("RESUMO DO JOGO\n");
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf(" Nome do Jogador Numero do Jogador\tPontos Marcados\tNúmero de Assitências\tNúmero de Roubos\tNúmero de Rebotes\tNúmero de Turnovers\tNúmero de Faltas\n");
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    
    for (int i = 0; i < MAX_JOGADORES; i++){
        printf("%s %d\t%d\t%d\t%d\t%d\t%d\t%d\n", team_a.nomeJogador[i], team_a.numeroJogador[i], team_a.nPontosMarcados[i], team_a.nAssists[i], team_a.nRoubos[i], team_a.nRebotes[i], team_a.nTurnovers[i], team_a.nFaltas[i]);
    }
}  