#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int hr, min;
    float seg2, min2, seg;
    printf("Digite a hora, minuto e segundo: ");
    scanf("%d %d %f", &hr, &min, &seg);
    if (hr>1 && min>15)
    {
        seg2 = (hr*60*60)+(min*60)+seg;
        printf("Quantia em segundos: %.2f\n", seg2);
    }
    else
    {
        min2 = (hr*60) + min + (seg/60);
        printf("Quantidade em minutos: %.2f\n", min2);
    }
    printf("Horario: %02d:%02d:%02d\n", hr, min, seg);
    return 0;
}
