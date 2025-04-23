#include<stdio.h>
#include<math.h>
int main()
{
    int n, cont;
    printf("Digite o numero que vc quer a tabuada: ");
    scanf("%d", &n);

    for (cont=1; cont<=10 ; cont++){
        printf("%d x %d = %d \n",n,cont,n*cont);
    }
    return 0;
}

