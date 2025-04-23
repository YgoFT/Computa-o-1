#include<stdio.h>
int main()
{
    float mmin, mseg, result, dif;
    int min, km, seg;
    printf("Quantos km você percorreu?\nResposta: ");
    scanf("%d", &km);
    printf("Em quantos minutos você percorreu?\nResposta: ");
    scanf("%d", &min);
    printf("Em quantos segundos você percorreu?\nResposta: ");
    scanf("%d", &seg);
    mmin = min/km;
    dif = min%km;
    mseg = ((dif*60)+seg)/(km*100);
    result = mmin+mseg;
    printf("Seu ritmo é de %.2f\n", result);
}
