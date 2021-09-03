#include "Time.h"
#include <iostream>
#include <string>
#define MAX_JOGADORES 12

using namespace std;

Time::Time(){

}

void Time::Cadastrar_time(){

    getline(cin, nomeTime);

    for(int i = 0; i < MAX_JOGADORES; i++){

        cout << "Digite o Nome do Jogador " << i + 1 << ": " << endl;
        getline(cin, nomeJogador[i]);

        cout << "Digite o Número do Jogador " << i + 1 << ": " << endl;
        cin >> numeroJogador[i];
    }
}

void Time::Add_pontos(){
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


void Time::Add_rebotes(){
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
