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
        int nTurnovers[MAX_JOGADORES] = {0};
        int nFaltas[MAX_JOGADORES] = {0};

        void Cadastrar_time();
        void Adicionar_pontos();
        void Adicionar_rebotes();
        void Adicionar_roubos();
        void Adicionar_assistencias();
        void Adicionar_turnovers();
        void Adicionar_faltas();

};

#endif // TIME_H
