#ifndef TIME_H
#define TIME_H
#include <string>
#define MAX_JOGADORES 12

using namespace std;

class Time
{
    public:
        Time();
        string nomeTime;
        string nomeJogador[MAX_JOGADORES];
        int numeroJogador[MAX_JOGADORES];
        string posJogador[MAX_JOGADORES];
        int nPontosMarcados[MAX_JOGADORES] = {0};
        int nAssists[MAX_JOGADORES] = {0};
        int nRoubos[MAX_JOGADORES] = {0};
        int nRebotes[MAX_JOGADORES] = {0};
        int nTurnover[MAX_JOGADORES] = {0};
        int nFaltas[MAX_JOGADORES] = {0};

        void Cadastrar_time();
        void Add_pontos();
        void Add_rebotes();
        void Add_assists();
        void Add_turnover();
        void Add_falta();

};

#endif // TIME_H
