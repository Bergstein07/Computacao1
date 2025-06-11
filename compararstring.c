#include <stdio.h>
#include <string.h>

int main()
{
    char nomes[3][101], nomenovo[101];
    int existe = 0;

    for (int i = 0; i < 3; i++) {
        printf("Digite o %dº nome:\n", i + 1);
        fgets(nomes[i], 101, stdin);
    }

    while(1)
    {
        printf("Digite o nome para saber se já foi colocado:\n");
        fgets(nomenovo, 101, stdin);

        for (int i = 0; i < 3; i++) {
            if (strcmp(nomenovo, nomes[i]) == 0) {
                existe = 1;
            }
        }

        if (existe) {
            printf("Ele esta entre os tres nome\n");
            printf("Programa finalizado");
            break;
        } else {
            printf("Este nome nao esta entre os tres nomes.\n");
        }
    }

    return 0;
}
