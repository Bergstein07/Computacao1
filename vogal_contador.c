#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100];
    int a=0, e=0, i=0, o=0, u=0;
    
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    for(int x=0; frase[x]!='\0'; x++) {
        char c = tolower(frase[x]);
        if(c == 'a') a++;
        else if(c == 'e') e++;
        else if(c == 'i') i++;
        else if(c == 'o') o++;
        else if(c == 'u') u++;
    }

    printf("a : ");
    for(int x=0; x<a; x++) printf("*");
    printf(" (%d)\n", a);

    printf("e : ");
    for(int x=0; x<e; x++) printf("*");
    printf(" (%d)\n", e);

    printf("i : ");
    for(int x=0; x<i; x++) printf("*");
    printf(" (%d)\n", i);

    printf("o : ");
    for(int x=0; x<o; x++) printf("*");
    printf(" (%d)\n", o);

    printf("u : ");
    for(int x=0; x<u; x++) printf("*");
    printf(" (%d)\n", u);

    return 0;
}
