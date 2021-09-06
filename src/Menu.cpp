#include "Menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "Time.h"
#include "Boxscore.h"
#include "Menu2.h"

int a, b, L, L2;
Menu2 menu_jogo = Menu2();

Menu::Menu()
{

}

 void Menu:: gotoxy(int x, int y){
        COORD c;
        c.X = x;
        c.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int Menu::show(Time team_a, Time team_b, Boxscore total){
        /*//menu*/
        int opcao;
        do{
            inicio:

            opcao = 0;

            L = 2;
            L2 = 2;
            b = 2;
            system("cls");
            system("color 0f");
            printf("\n\n      1 - Cadastrar Times \n      2 - Ir para Partida \n      9 - Sair\n");

            do{
                gotoxy(1,L);

                printf("-->");

                gotoxy(10,6);

                if(kbhit){
                    a = getch();
                }
                if(a == 80 && b < 5){
                    L2=L;
                    L++;
                    b++;
                }/*seta p/baixo*/

                if(a == 72 && b > 2){
                        L2=L;
                        L--;
                        b--;
                }/*seta p/cima */

                if(L!=L2){
                        gotoxy(1,L2);printf("   ");L2=L;
                }
                if(a == 13){
                        opcao = b-1;
                }

            }while(opcao == 0);

            switch (opcao){
                case 1:
                    system("cls");
                    printf("\n    Cadastrar Time\n");

                    team_a.Cadastrar_time();
                    team_b.Cadastrar_time();

                    break;

                case 2:
                    system("cls");
                    printf("\n Come�ou Partida\n");
                    menu_jogo.show(team_a, team_b);
                    break;

                case 3:
                    system("cls");
                    printf("Voce pediu para sair, prencione qualquer tecla para continuar\n");
                    break;

                default:
                    printf("voce deve escolher uma opcao valida\n");
                    printf("Precione qualquer tecla para voltar ao menu\n");
                    system("pause");
                    goto inicio;
            }
        }while(opcao != 3);

        return 0;
    }
