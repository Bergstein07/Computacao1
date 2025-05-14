#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main()
{

    int vetor1[5], vetor2[5], i, j, achou=0;

    srand(time(NULL));

    printf("valores dos vetores:\n");

    for (i=0; i<5; i++){

        vetor1[i]=rand()%5;
        printf("vetor1[%d] valor:%d\n ",i, vetor1[i]);

        vetor2[i]=rand()%5;
        printf("vetor2[%d] valor:%d\n ",i, vetor2[i]);
    }

    printf("\nvalores iguais:\n");

    for (i=0; i<5; i++){

        for (j=0; j<5; j++){

            if (vetor1[i]==vetor2[j]){
                achou =1;
                printf("vetor1[%d] = vetor2 [%d] = %d\n", i,j,vetor1[i]);
            }
        }
    }

    if(!achou)
        printf("nenhum elemento em comum\n");

return 0;
}
