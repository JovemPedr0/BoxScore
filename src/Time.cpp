#include "Time.h"
#include <iostream>
#include <string>
#define MAX_JOGADORES 12

using namespace std;

Time::Time(){

}

void Time::Cadastrar_time(){

    cout << "Digite o Nome do Time\n" << endl;
    getline(cin.ignore(), nomeTime);

    for(int i = 0; i < MAX_JOGADORES; i++){

        cout << "Digite o Nome do Jogador " << i + 1 << ": " << endl;
        getline(cin.ignore(), nomeJogador[i]);

        cout << "Digite o Número do Jogador " << i + 1 << ": " << endl;
        cin >> numeroJogador[i];
    }
}

void Time::Adicionar_pontos(){
    int num;
    int pontos;

    cout << "Digite o numero do jogador que marcou o ponto: " << endl;
    cin >> num;

    for(int i = 0; i < MAX_JOGADORES; i++){
        if (num == numeroJogador[i]){
            cout << "Digite quantos pontos foi marcado: " << endl;
            cin >> pontos;
            nPontosMarcados[i] += pontos;
            break;
        }
    }
}


void Time::Adicionar_rebotes(){
    int num;

    cout << "Digite o numero do jogador que pegou o rebote: " << endl;
    cin >> num;

    for(int i = 0; i < MAX_JOGADORES; i++){
        if (num == numeroJogador[i]){
            nRebotes[i] ++;
            break;
        }
    }
}


void Time::Adicionar_turnovers(){
    int num;

    cout << "Digite o numero do jogador que deu o turnover: " << endl;
    cin >> num;

    for(int i = 0; i < MAX_JOGADORES; i++){
        if (num == numeroJogador[i]){
            nTurnovers[i] ++;
            break;
        }
    }
}

void Time::Adicionar_faltas(){
    int num;

    cout << "Digite o numero do jogador que cometeu a falta: " << endl;
    cin >> num;

    for(int i = 0; i < MAX_JOGADORES; i++){
        if (num == numeroJogador[i]){
            nFaltas[i] ++;
            break;
        }
    }
}

void Time::Adicionas_assistencias(){
    int num;

    cout << "Digite o numero do jogador que deu a assistência: " << endl;
    cin >> num;

    for(int i = 0; i < MAX_JOGADORES; i++){
        if (num == numeroJogador[i]){
            nAssists[i] ++;
            break;
        }
    }
}

void Time::Adicionar_roubos(){
    int num;

    cout << "Digite o numero do jogador que deu o turnover: " << endl;
    cin >> num;

    for(int i = 0; i < MAX_JOGADORES; i++){
        if (num == numeroJogador[i]){
            nRoubos[i] ++;
            break;
        }
    }
}
