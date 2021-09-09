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
    printf("------------------------------------------------------------------------------------------------------------------\n");
    printf(" Nome do Jogador Numero\t  Pontos\t  Assitências\t  Roubos\t  Rebotes\t  Turnovers\t  Faltas\n");
    printf("------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < MAX_JOGADORES; i++){
       cout << team_a.nomeJogador[i] << "\t\t" << team_a.numeroJogador[i] << "\t\t" << team_a.nPontosMarcados[i] << "\t\t" << team_a.nAssists[i] << "\t\t" << team_a.nRoubos[i] << "\t\t" << team_a.nRebotes[i] << "\t\t" <<team_a.nTurnovers[i] << "\t\t" << team_a.nFaltas[i] << endl;
    }
}

void Boxscore::SalvaBoxscore(Time team_a, Time team_b){
    FILE *arq;
    int i;

    arq = fopen("partida.csv", "w");
    if(arq == NULL){
        return;
    }
    fprintf(arq,"%s\n", team_a.nomeTime);
    fprintf(arq,"%d\n", nPontuacaoTimeA);

    for(i = 0; i < MAX_JOGADORES; i++){
       fprintf(arq, "%s %d %d %d %d %d %d %d\n", team_a.nomeJogador[i], team_a.numeroJogador[i], team_a.nPontosMarcados[i], 
       team_a.nAssists[i], team_a.nRoubos[i], team_a.nRebotes[i], team_a.nTurnovers[i], team_a.nFaltas[i]);
    }

    fprintf(arq,"%s\n", team_b.nomeTime);
    fprintf(arq,"%d\n", nPontuacaoTimeB);

    for(i = 0; i < MAX_JOGADORES; i++){
       fprintf(arq, "%s %d %d %d %d %d %d %d\n", team_b.nomeJogador[i], team_b.numeroJogador[i], team_b.nPontosMarcados[i], 
       team_b.nAssists[i], team_b.nRoubos[i], team_b.nRebotes[i], team_b.nTurnovers[i], team_b.nFaltas[i]);
    }

    if(fclose(arq) == 0){
        cout << "Partida salva com sucesso !" << endl;
    }
    
}
