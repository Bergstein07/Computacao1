#include<stdio.h>
#include<locale.h>
int main()
{
    float A, G, Ra, Rg;
    printf("Digite o valor do alcool: ");
    scanf("%f", &A);
    printf("Digite o valor da gasolina:");
    scanf("%f", &G);
    printf("Informe o rendimento do alcool:");
    scanf("%f", &Ra);
    printf("Informe o rendimento da gasolina:");
    scanf("%f", &Rg);


    if (Ra/A > Rg/G)
    {
        printf("A \n");
    }

    else if (Rg/G >= Ra/A)
    {
        printf("G \n");
    }
    return 0;
}
