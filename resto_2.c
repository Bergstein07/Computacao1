#include<stdio.h>
#include<locale.h>
int main()
{
    int n, i = 1, r2;
    printf("Digite um numero: ");
    scanf("%d", &n );

    while(i<=100){
    if(i % n == 2){
    printf("%d\n", i);
    }
        i++;
    }
    return 0;
}
