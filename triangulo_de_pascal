#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,**N,i,j;

    printf("Quantas linhas do Triangulo de Pascal ce queh? ");
    scanf("%d", &n);

    N = (int **) malloc(n*sizeof(int *));
    if (N == NULL)
    {
        printf("Erro\n");
        return(-1);
    }

    for (i = 0; i < n; i++)
    {
        N[i] = (int *) malloc((i+1)*sizeof(int));
        if (N[i] == NULL)
        {
            printf("Erro\n");
            return(-1);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if ((i == j) || (j == 0))
            {
                N[i][j] = 1;
            }
            else
            {
                N[i][j] = N[i-1][j] + N[i-1][j-1];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%5d ", N[i][j]);
        }
        printf("\n");
    }

    return(0);
}
