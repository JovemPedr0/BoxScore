#include <iostream>
#include <string.h>
#include <vector>

#define MAX_JOGADORES 12

using namespace std;

string nomeTime;
int qJogadores = 0;

typedef struct {
    string nomeJogador;
    int numeroJogador;
    string posJogador;
    int nPontosMarcados;
    int nAssists;
    int nRoubos;
    int nRebotes;
    int nTurnover;
}tJogadores;

tJogadores jogadores[MAX_JOGADORES];

void InicioPrograma(){
    cout << "Bem Vindo!" << endl;  
}


int main(){
    
    
    
    return 0;
}