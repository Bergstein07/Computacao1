#include<stdio.h>
#include<math.h>
int main()
{
    float porta=0.8, base, altura;
    printf("Digite a base e a altura do quarto: ");
    scanf("%f %f", &base, &altura);

    printf("Perimetro total %.2f\n", (base + altura)*2);
    printf("Perimetro descontando a porta %.2f\n", 2*(base+altura)-porta);
    printf("Area do quarto %.2f\n", base*altura);
    return 0;
}
