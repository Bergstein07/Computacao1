#include <stdio.h>

int main() {
    char nome[100], bairro[100], senha[200];
    int i, j = 0;
    char c;

    printf("Digite o nome (sem espaço): ");
    scanf("%s", nome);

    printf("Digite o bairro (sem espaço): ");
    scanf("%s", bairro);

    for (i = 0; nome[i] != '\0'; i++) {
        c = nome[i];
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            senha[j] = c;
            j++;
        }
    }

    for (i = 0; bairro[i] != '\0'; i++) {
        c = bairro[i];
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            senha[j] = c;
            j++;
        }
    }

    senha[j] = '\0'; 

    printf("Senha gerada: %s\n", senha);

    return 0;
}
