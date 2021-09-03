#include "Menu.h"
#include "Menu2.h"
#include "Time.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int a2, b2, L3, L4;

Menu2::Menu2(){

}

void Menu2::gotoxy(int x, int y){
        COORD c;
        c.X = x;
        c.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int Menu2::show(Time team_a, Time team_b){

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
            printf("\n\n      1 - Adicionar Pontos \n      2 - Adicionar Rebotes \n      3 - Adicionar Roubos \n      4 - Adicionar Assistencias\n      5 - Adicionar Turnovers\n      6 - Adicionar Faltas\n");

            do{
                gotoxy(1,L);

                printf("-->");

                gotoxy(10,6);

                if(kbhit){
                    a2 = getch();
                }
                if(a2 == 80 && b2 < 5){
                    L4 = L;
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
                    scanf("%c%*c", &opcao_time);

                    if(opcao == 'A'){
                        team_a.Adicionar_pontos();

                    }else if(opcao == 'B'){
                        team_b.Adicionar_pontos();
                    }

                    break;

                case 2:
                    system("cls");
                    printf("\n    Adicionar Rebotes\n");
                    //Adicionar_rebotes();
                    break;

                case 3:
                    system("cls");
                    printf("\n    Adicionar Roubos\n");
                    //Adicionar_roubos();
                    break;

                case 4:
                    system("cls");
                    printf("\n    Adicionar Assistencias\n");
                    //Adicionar_assistencias();
                    break;

                case 5:
                    system("cls");
                    printf("\n    Adicionar Turnovers\n");
                    //Adicionar_turnovers();
                    break;

                case 6:
                    system("cls");
                    printf("\n    Adicionar Faltas\n");
                    //Adicionar_assistencias();
                    break;

                case 9:
                    system("cls");
                    printf("\n    Fim de Jogo\n");
                    break;

                default:
                    printf("voce deve escolher uma opcao valida\n");
                    printf("Precione qualquer tecla para voltar ao menu\n");
                    system("pause");
                    goto inicio;
            }
        }while(opcao != 9);

        return 0;
    }
