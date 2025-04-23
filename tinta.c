#include<stdio.h>
#include<math.h>
int main()
{
    float n1, n2, n3;
    printf("Digite a altura da parede: ");
    scanf("%f", &n1);
    printf("Digite a largura da parede: ");
    scanf("%f", &n2);

    printf("A area da parede eh de: %.2f metros quadrados \n", n1*n2);
    printf("Precisa de %.0f litros de tinta.", ceil((n1*n2)/2));


    return 0;
}
