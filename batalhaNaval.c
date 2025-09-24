#include <stdio.h>

int main (){

    //declara matriz com valores inseridos para criar tabuleiro
    int tabuleiro [10] [10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
           tabuleiro [i][j] = 0;
        }
        
    }
    
    char * coluna [10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J" };

    //insere navio 1 horizontal posicionamento for aninhado
    for (int i = 2; i == 2; i++)
    {
        for (int j = 3; j <= 5; j++)
        {
            tabuleiro [i][j] = 3;
        } 
    }

    //insere navio 2 vertical posicionamento for aninhado
    for (int j = 4; j == 4; j++)
    {
        for (int i = 6; i <= 8; i++)
        {
            tabuleiro [i][j] = 3;
        }
    }

    //Exibe navio na primeira diagonal posicionamento por for
     for (int i = 0, j = 0, cont1 = 0; i < 10 && cont1 < 3 ; i++, j++)
    {
       tabuleiro[i][j+5] = 3; //exibe navio movimentando as casas
       ++cont1;
    }
    
    //Exibe navio na segunda diagonal posicionamento por for
     for (int i = 0, cont2 = 0; i < 10 && cont2 < 3; i++)
    {
       int j = 9 - i;
       tabuleiro[i+4][j] = 3;//exibe navio movimentando as casas
       ++cont2;
    }

    
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