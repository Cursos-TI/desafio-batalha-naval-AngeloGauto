#include <stdio.h>

int main (){

    //declara matriz com valores inseridos para criar tabuleiro
    int tabuleiro [10] [10] = {

        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    char * coluna [10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J" };

    //insere navio horizontal
    tabuleiro [2][3] = 3;
    tabuleiro [2][4] = 3;
    tabuleiro [2][5] = 3;

    //insere navio na vertical
    tabuleiro [6][6] = 3;
    tabuleiro [7][6] = 3;
    tabuleiro [8][6] = 3;


    //exibe nome do jogo
    printf ("-----TABULEIRO BATALHA NAVAL-----\n");

    //imprime espaço para alinhar as colunas
    printf("    ");

    //cria orientação do tabuleiro de A até J para colunas
    for (int i = 0; i < 10; i++)
    {
        printf("%s  ", coluna [i]);
    }
    printf ("\n");


    //for para trocar linha de exibição do tabuleiro
    for (int i = 0, x=1; i < 10; i++, x++)

    {
        //exibe numero de orientação de linhas
        printf("%2d  ", x);

        //for que mostra tabuleiro e navios
        for (int j = 0; j < 10; j++)
        {
            printf ("%d  ",tabuleiro[i] [j]);
        }

        //pula a linha do tabuleiro
        printf ("\n" );
       
    }
    
    return 0;
}