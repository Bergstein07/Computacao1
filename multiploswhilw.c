#include<stdio.h>
#include<math.h>
int main()
{
    int n1, n2, n3, soma = 0;
    printf("Digite o numero base: ");
    scanf("%d", &n1);
    printf("Digite o inicil do intervalo: ");
    scanf("%d", &n2);
    printf("Digite o final do intervalo: ");
    scanf("%d", &n3);

    while (n2<=n3){
        if(n2 % n1 == 0)
        {
            soma = soma + n2;
        }
        n2 = n2 + 1;
    }

    printf("\nsaiu, %d", soma);
    return 0;
}
