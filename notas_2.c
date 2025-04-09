#include<stdio.h>
#include<locale.h>
int main()
{
    int frequencia;
    float nota1, nota2, nota3, media;
    printf("digite suas notas com espaço entre cada uma e porfim a frequencia:\t");
    scanf("%f %f %f %d",&nota1,&nota2,&nota3,&frequencia);

    media = (nota1+nota2+nota3)/3;

    if (media >8 && frequencia >= 75)
    {
        printf("\n O estudante foi Aprovado com Distinção pois teve média %f e frequência %d \n",media, frequencia);
    }

    else if (media >=6 && frequencia >= 75)
    {
        printf("\n O estudante foi Aprovado Direto pois teve média %f e frequência %d \n",media, frequencia);
    }

    else if (media >= 4 && media <6 && frequencia >= 75 || media >= 6 && frequencia < 75 || media >= 4 && frequencia > 50 && frequencia < 75)
    {
        printf("\n O estudante fVai para Final pois teve média %f e frequência %d \n",media, frequencia);
    }

    else
    {
        printf("\n O estudante foi Reprovado Direto pois teve média %f e frequência %d \n",media, frequencia);
    }

    return 0;
}
