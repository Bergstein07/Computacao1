#include <stdio.h>
#include <locale.h>

int main()
{
    int n, maior;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (;n>0;)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n > maior)
        {
            maior = n;
        }
    }
    printf("O maior numero postivo digitado foi: %d\n", maior);
    return 0;
}
