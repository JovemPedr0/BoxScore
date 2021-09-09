#include "Boxscore.h"
#include "Time.h"
#include <iostream>
#include <fstream>

using namespace std;

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
    printf("Nome do Jogador Numero\t  Pontos\t  Assitências\t  Roubos\t  Rebotes\t  Turnovers\t  Faltas\n");
    printf("------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < MAX_JOGADORES; i++){
       cout << team_a.nomeJogador[i] << "\t\t" << team_a.numeroJogador[i] << "\t\t" << team_a.nPontosMarcados[i] << "\t\t" << team_a.nAssists[i] << "\t\t" << team_a.nRoubos[i] << "\t\t" << team_a.nRebotes[i] << "\t\t" <<team_a.nTurnovers[i] << "\t\t" << team_a.nFaltas[i] << endl;
    }
}

void Boxscore::SalvaBoxscore(Time team_a, Time team_b){
    ofstream stream;
    int i;

    stream.open("partida.csv", ios::out);

    if (!stream.is_open()){
        
    }
    
    stream << team_a.nomeTime << endl;
    stream << nPontuacaoTimeA << endl;

    for(i = 0; i < MAX_JOGADORES; i++){
       stream << team_a.nomeJogador[i] << " " << team_a.numeroJogador[i] << " " << team_a.nPontosMarcados[i] << " " << team_a.nAssists << " " << team_a.nRoubos[i] << " " << team_a.nRebotes << " " << team_a.nTurnovers[i] << " " << team_a.nFaltas[i] << endl;
    }
    
    stream << team_b.nomeTime << endl;
    stream << nPontuacaoTimeB << endl;
    
    
    for(i = 0; i < MAX_JOGADORES; i++){
       stream << team_b.nomeJogador[i] << " " << team_b.numeroJogador[i] << " " << team_b.nPontosMarcados[i] << " " << team_b.nAssists << " " << team_b.nRoubos[i] << " " << team_b.nRebotes << " " << team_b.nTurnovers[i] << " " << team_b.nFaltas[i] << endl;
    }

    stream.close();
}
