#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main (){

    //Realizei a inserção das formas geometricas usando 3 lógicas diferentes para aprender, entender os loops e como 
    //eles interagem entre si, mesmo a ultima que foi feita no octoedro ser a mais eficiente permitindo uma entrada
    //simples de usuario com o local facilmente, mantive as outras.

    //declara matriz com valores inseridos para criar tabuleiro
    int tabuleiro [LINHA] [COLUNA];
    //declara variaveis para uso de controle das formas geometricas
    int contaCone = 0;
    int contaCruz = 0;
    int posInicialOcto = 6;
    //declara letra para uso de orientação do tabuleiro
    char letra = 'A';


    //Preenche 0 no tabuleiro
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
           tabuleiro [i][j] = 0;
        }
        
    }
    
    //mostra triangulo no prompt
    for (int i = 2; i < LINHA; i++)
    {
        for (int j = 2, y = 2; j < COLUNA; j++, y--)
        {
            if (j <= i && contaCone <= 5)
            {
                 tabuleiro [i][j] = 5;
                 tabuleiro [i][y] = 5;
                 ++contaCone;
            }
        }   
    }

    //Exibe cruz no prompt
    for (int i = 2; i < LINHA; i++)
    {
        for (int j = 7, y = 7; j < COLUNA; j++, y-- )
        {
            //horizontal

            if (contaCruz <=2)
            {
                tabuleiro [i][j] = 8;
                tabuleiro [i][y] = 8;
                ++contaCruz;

            //vertical   
            }else if (contaCruz <=3)
            {
                y=7;
                tabuleiro [i-2][y] = 8;
                tabuleiro [i][y] = 8;
                ++contaCruz;
            }
            
        }

    }

    //Exibe octaedro no prompt
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            
            if (i==posInicialOcto && j==posInicialOcto)
            {
                //horizontal
                tabuleiro [i][j] = 7;
                tabuleiro [i][j-1] = 7;
                tabuleiro [i][j+1] = 7;

                //vertical
                tabuleiro [i-1][j] = 7;
                tabuleiro [i+1][j] = 7;
            }
        }
    }

    //exibe nome do jogo
    printf ("-----TABULEIRO BATALHA NAVAL-----\n");

    //imprime espaço para alinhar as colunas
    printf("    ");

    //cria orientação do tabuleiro de A até J para colunas
    for (int i = 0 ; i < COLUNA; i++)
    {
       printf("%c  ", letra);
       ++letra;
    }
    printf ("\n");


    //for para trocar linha de exibição do tabuleiro
    for (int i = 0, x=1; i < LINHA; i++, x++)

    {
        //exibe numero de orientação de linhas laterais a esquerda de 1 a 10
        printf("%2d  ", x);

        //for que mostra tabuleiro e navios
        for (int j = 0; j < COLUNA; j++)
        {
            printf ("%d  ",tabuleiro[i] [j]);
        }

        //pula a linha do tabuleiro
        printf ("\n" );
       
    }
    
    return 0;
}