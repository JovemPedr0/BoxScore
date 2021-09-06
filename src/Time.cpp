#include "Time.h"
#include <iostream>
#include <string>
#define MAX_JOGADORES 12

using namespace std;

Time::Time(){

}

void Time::Cadastrar_time(){

    cout << "\nDigite o Nome do Time" << endl;
    getline(cin, nomeTime);

    for(int i = 0; i < MAX_JOGADORES; i++){

        cout << "\nDigite o Nome do Jogador " << i + 1 << ": " << endl;
        getline(cin, nomeJogador[i]);

        cout << "Digite o N�mero do Jogador " << i + 1 << ": " << endl;
        cin >> numeroJogador[i];
        scanf("%*c");
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

void Time::Adicionar_assistencias(){
    int num;

    cout << "Digite o numero do jogador que deu a assist�ncia: " << endl;
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

    cout << "Digite o numero do jogador que fez o roubo: " << endl;
    cin >> num;

    for(int i = 0; i < MAX_JOGADORES; i++){
        if (num == numeroJogador[i]){
            nRoubos[i] ++;
            break;
        }
    }
}
