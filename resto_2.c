#include<stdio.h>
#include<locale.h>
int main()
{
    int n, i = 1, r2;
    printf("Digite o numero que vc deseja dividir: ");
    scanf("%d", &n );
    printf("Os numeros divididos por %d e tem resto 2 sao: \n", n);
    while(i<=100){
    if(i % n == 2){
    printf("%d\n", i);
    }
        i++;
    }
    return 0;
}
