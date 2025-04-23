#include<stdio.h>
int main()
{
    float media_min, km, min, seg;
    printf("Quantos km você percorreu?\nResposta: ");
    scanf("%f", &km);
    printf("Em quantos minutos você percorreu?\nResposta: ");
    scanf("%f", &min);
    printf("Em quantos segundos você percorreu?\nResposta: ");
    scanf("%f", &seg);
    media_min = (min+(seg/60))/km;
    printf("Sua média em km/minuto é de %.2f\n", media_min);
}
