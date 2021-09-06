#include "Menu.h"
#include "Menu2.h"
#include "Time.h"
#include "Boxscore.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <iostream>

int a2, b2, L3, L4;

Menu2::Menu2(){

}

void Menu2::gotoxy(int x, int y){
        COORD c;
        c.X = x;
        c.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int Menu2::show(Time team_a, Time team_b, Boxscore total){

        char opcao_time;

        /*//menu*/

        int opcao;
        do{
            inicio:

            opcao = 0;

            L3 = 2;
            L4 = 2;
            b2 = 2;
            system("cls");
            system("color 0f");
            printf("\n\n      1 - Adicionar Pontos \n      2 - Adicionar Rebotes \n      3 - Adicionar Roubos \n      4 - Adicionar Assistencias\n      5 - Adicionar Turnovers\n      6 - Adicionar Faltas\n      9 - Fim de Jogo\n ");

            do{
                gotoxy(1,L3);

                printf("-->");

                gotoxy(5,10);

                if(kbhit){
                    a2 = getch();
                }
                if(a2 == 80 && b2 < 8){
                    L4 = L3;
                    L3++;
                    b2++;
                }/*seta p/baixo*/

                if(a2 == 72 && b2 > 2){
                    L4 = L3;
                    L3--;
                    b2--;
                }/*seta p/cima */

                if(L3 != L4){
                    gotoxy(1,L4);
                    printf("   ");
                    L4 = L3;
                }
                if(a2 == 13){
                    opcao = b2 - 1;
                }

            }while(opcao == 0);

            switch (opcao){

                case 1:
                    system("cls");
                    printf("\n    Adicionar Pontos\n");

                    printf("Digite o Time A ou B: ");
                    scanf("%*c%c", &opcao_time);
                        if(opcao_time == 'A'){
                        team_a.Adicionar_pontos();

                    }else if(opcao_time == 'B'){
                        team_b.Adicionar_pontos();

                    }else{
                        printf("Digite o Time A ou B: ");
                        scanf("%*c%c", &opcao_time);
                    }

                    break;

                case 2:
                    system("cls");
                    printf("\n    Adicionar Rebotes\n");

                    printf("Digite o Time A ou B: ");
                    scanf("%*c%c", &opcao_time);

                    if(opcao_time == 'A'){
                        team_a.Adicionar_rebotes();

                    }else if(opcao_time == 'B'){
                        team_b.Adicionar_rebotes();

                    }else{
                        printf("Digite o Time A ou B: ");
                        scanf("%*c%c", &opcao_time);
                    }
                    break;

                case 3:
                    system("cls");
                    printf("\n    Adicionar Roubos\n");

                    printf("Digite o Time A ou B: ");
                    scanf("%*c%c", &opcao_time);

                    if(opcao_time == 'A'){
                        team_a.Adicionar_roubos();

                    }else if(opcao_time == 'B'){
                        team_b.Adicionar_roubos();

                    }else{
                        printf("Digite o Time A ou B: ");
                        scanf("%*c%c", &opcao_time);
                    }
                    break;

                case 4:
                    system("cls");
                    printf("\n    Adicionar Assistencias\n");

                    printf("Digite o Time A ou B: ");
                    scanf("%*c%c", &opcao_time);

                    if(opcao_time == 'A'){
                        team_a.Adicionar_assistencias();

                    }else if(opcao_time == 'B'){
                        team_b.Adicionar_assistencias();

                    }else{
                        printf("Digite o Time A ou B: ");
                        scanf("%*c%c", &opcao_time);
                    }
                    break;

                case 5:
                    system("cls");
                    printf("\n    Adicionar Turnovers\n");

                    printf("Digite o Time A ou B: ");
                    scanf("%*c%c", &opcao_time);

                    if(opcao_time == 'A'){
                        team_a.Adicionar_turnovers();

                    }else if(opcao_time == 'B'){
                        team_b.Adicionar_turnovers();

                    }else{
                        printf("Digite o Time A ou B: ");
                        scanf("%*c%c", &opcao_time);
                    }
                    break;

                case 6:
                    system("cls");
                    printf("\n    Adicionar Faltas\n");

                    printf("Digite o Time A ou B: ");
                    scanf("%*c%c", &opcao_time);

                    if(opcao_time == 'A'){
                        team_a.Adicionar_faltas();

                    }else if(opcao_time == 'B'){
                        team_b.Adicionar_faltas();

                    }else{
                        printf("Digite o Time A ou B: ");
                        scanf("%*c%c", &opcao_time);
                    }
                    break;

                case 7:
                    system("cls");
                    printf("\n    Fim de Jogo\n");
                    total.getPtsTotal(team_a, team_b);
                    total.getResumoJogo(team_a);
                    system("pause");
                    total.getResumoJogo(team_b);
                    system("pause");
                    break;

                default:
                    printf("voce deve escolher uma opcao valida\n");
                    printf("Precione qualquer tecla para voltar ao menu\n");
                    system("pause");
                    goto inicio;
            }
        }while(opcao != 7);

        return 0;
    }
