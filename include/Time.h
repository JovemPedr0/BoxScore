#ifndef TIME_H
#define TIME_H
#include <string>

using namespace std;

class Time
{
    public:
        Time();
        string nomeJogador[12];
        int numeroJogador[12];
        string posJogador[12];
        int nPontosMarcados[12] = {0};
        int nAssists[12] = {0};
        int nRoubos[12] = {0};
        int nRebotes[12] = {0};
        int nTurnover[12] = {0};

};

#endif // TIME_H
