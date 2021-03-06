#include "Boxscore.h"
#include "Time.h"
#include <iostream>

Boxscore::Boxscore(){

}

void Boxscore::getPtsTotal(Time team_a, Time team_b){

    for(int i = 0; i < MAX_JOGADORES; i++){
        nPontuacaoTimeA += team_a.nPontosMarcados[i];
        nPontuacaoTimeB += team_b.nPontosMarcados[i];
    }

    cout << "------------------------------------------------------" << endl;
    cout << team_a.nomeTime << " X " << team_b.nomeTime << endl;
    cout << "\t" << nPontuacaoTimeA << " X " << nPontuacaoTimeB << endl;
    cout << "------------------------------------------------------" << endl;
}

void Boxscore::getResumoJogo(Time team_a){
    printf("\n\tRESUMO DO JOGO\n");
    cout << team_a.nomeTime << endl;
    printf("------------------------------------------------------------------------------------------------------------------------------\n");
     printf("Nome do Jogador   Numero\t  Pontos\t  Assitencias\t  Roubos\t  Rebotes\t  Turnovers\t  Faltas\n");
    printf("------------------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < MAX_JOGADORES; i++){
       cout << team_a.nomeJogador[i] << "\t\t" << team_a.numeroJogador[i] << "\t\t" << team_a.nPontosMarcados[i] << "\t\t" << team_a.nAssists[i] << "\t\t" << team_a.nRoubos[i] << "\t\t" << team_a.nRebotes[i] << "\t\t" <<team_a.nTurnovers[i] << "\t\t" << team_a.nFaltas[i] << endl;
    }
}
