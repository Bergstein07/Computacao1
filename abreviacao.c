#include <stdio.h>

int main() {
    char nome[100];
    char c;
    int i = 0, inicio = 1;

    printf("Digite o nome completo: ");
    scanf(" %[^\n]", nome);

    while (nome[i] != '\0') {
        c = nome[i];

        if (inicio == 1 && c != ' ') {
            int cont = 0, k = i;
            while (nome[k] != ' ' && nome[k] != '\0') {
                cont++;
                k++;
            }

            if (cont > 2) {
                printf("%c. ", nome[i]);
            } else {
                while (nome[i] != ' ' && nome[i] != '\0') {
                    printf("%c", nome[i]);
                    i++;
                }
                printf(" ");
                i--;
            }
            inicio = 0;
        }

        if (c == ' ') {
            inicio = 1;
        }

        i++;
    }

    printf("\n");
    return 0;
}
