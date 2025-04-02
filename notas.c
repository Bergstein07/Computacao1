#include<stdio.h>
int main()
{
    float n1, n2, n3, media;

    printf("Digite tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1+n2+n3)/3;

    if(media>8)
    {
        printf("Aprovado com Distinção.\n com a nota %f", media);
    }
    else if(media>=6)
    {
        printf("Aprovado Direto. \n com a nota %f", media);
    }
    else if(media>=4)
    {
        printf("Vai para Final. \n com a nota %f", media);
    }
    else
    {
        printf("Reprovado direto. \n com a nota %f", media);
    }
    return 0;
}
