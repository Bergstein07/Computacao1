#include<stdio.h>
#include<locale.h>
void converteHora(int totalsegundos, int *hora, int *min, int *seg)
{
    *hora = totalsegundos / 3600;
    *min = (totalsegundos % 3600) / 60;
    *seg = (totalsegundos % 3600) % 60;
}
int main()
{
    int totalsegundos, seg, min, hora;

    printf("Informe os segundos: ");
    scanf("%d", &totalsegundos);

    converteHora(totalsegundos, &hora, &min, &seg);
    printf("%d:%d:%d\n", hora, min, seg);

    return 0;
}
