#include<stdio.h>
int main()
{
    float media_min, media_seg, result, dif;
    int min, km, seg;
    printf("Quantos km você percorreu?\nResposta: ");
    scanf("%d", &km);
    printf("Em quantos minutos você percorreu?\nResposta: ");
    scanf("%d", &min);
    printf("Em quantos segundos você percorreu?\nResposta: ");
    scanf("%d", &seg);
    media_min = min/km;
    dif = min%km;
    media_seg = ((dif*60)+seg)/(km*100);
    result = media_min+media_seg;
    printf("Sua média em km/s é de %.2f\n", result);
}
