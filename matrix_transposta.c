#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void geraMatriz(int matriz[5][5])
{
    int l,c;
    srand(time(NULL));
    for(l=0; l<5; l++)
    {
        for(c=0; c<5; c++)
        {
            matriz[l][c]=rand()%100;
            printf("%d\t",matriz[l][c]);
        }
        printf("\n");
    }
}
void geraDez()
{
    int num, cont=0, l,c, qtd=0;
    for(cont=0; cont<10; cont++)
    {
        printf("%d",rand()%100);
    }
}
int main() {
    int matriz_original[5][5];
    int matriz_transposta[5][5];
    printf("\n\t Matriz original:\n\n");
    geraMatriz(matriz_original);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz_transposta[j][i] = matriz_original[i][j];
        }
    }
    printf("\n\t Matriz transposta:\n\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t ", matriz_transposta[i][j]);
        }
        printf("\n");
    }
}

