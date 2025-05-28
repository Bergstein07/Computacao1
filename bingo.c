#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void preencheBingo(int matriz[][N], int nl, int nc)
{
    int numeros[100];
    int total = 100;

    for (int i = 0; i < total; i++)
    {
        numeros[i] = i;
    }

    for (int i = total - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        int temp = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = temp;
    }

    int k = 0;
    for (int i = 0; i < nl; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            matriz[i][j] = numeros[k++];
        }
    }
}

void imprimeMatriz(int matriz[][N], int nl, int nc)
{
    for (int i = 0; i < nl; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            printf("%2d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int cartela[N][N];

    srand(time(NULL));
    preencheBingo(cartela, N, N);
    printf("Cartela de Bingo:\n");
    imprimeMatriz(cartela, N, N);

    return 0;
}
