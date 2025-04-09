#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float g, a, rg, ra, ckma, ckmg;
    printf("valor do álcool por litro: ");
    scanf("%f", &a);
    printf("quantia de km por litro de álcool: ");
    scanf("%f", &ra);
    printf("valor da gasolina por litro: ");
    scanf("%f", &g);
    printf("quantia de km por litro de gasolina: ");
    scanf("%f", &rg);
    ckma = a / ra;
    ckmg = g / rg;
    if (ckma < ckmg)
    {
        printf("A");
    }
    else
    {
        printf("G");
    }
}
