#include <stdio.h>

int main() {
    char frase1[100], frase2[100];
    char palavra1[20], palavra2[20];
    int i = 0, j = 0, k = 0, fim1 = 0, fim2 = 0;

    printf("Digite a frase 1: ");
    scanf(" %[^\n]", frase1);

    printf("Digite a frase 2: ");
    scanf(" %[^\n]", frase2);

    printf("Frase intercalada: ");

    while (fim1 == 0 || fim2 == 0) {
        if (fim1 == 0) {
            j = 0;
            while (frase1[i] != ' ' && frase1[i] != '\0') {
                palavra1[j] = frase1[i];
                i++;
                j++;
            }
            palavra1[j] = '\0';
            if (j > 0) {
                printf("%s ", palavra1);
            }
            if (frase1[i] == '\0') {
                fim1 = 1;
            } else {
                i++;
            }
        }

        if (fim2 == 0) {
            j = 0;
            while (frase2[k] != ' ' && frase2[k] != '\0') {
                palavra2[j] = frase2[k];
                k++;
                j++;
            }
            palavra2[j] = '\0';
            if (j > 0) {
                printf("%s ", palavra2);
            }
            if (frase2[k] == '\0') {
                fim2 = 1;
            } else {
                k++;
            }
        }
    }

    printf("\n");
    return 0;
}
