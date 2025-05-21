#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int matriz_original[5][5];

void geraMatriz()
{
    int l,c;
    srand(time(NULL));
    for(l=0; l<5; l++)
    {
        for(c=0; c<5; c++)
        {
            matriz_original[l][c]=rand()%100;
            printf("%d\t",matriz_original[l][c]);
        }
        printf("\n");
    }
}
void geraDez()
{
    int num, cont=0, l,c, qtd=0;
    for(cont=0; cont<10; cont++)
    {
        num=rand()%100;
        printf("%d",num);
    }
}
int main()
{
    printf("\n\t Matriz original:\n\n");
    geraMatriz();
    int matriz_transposta[5][5];
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
