#include<stdio.h>
int ehbissexto (int ano)
{
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int ano2;
    printf("Digite o ano: ");
    scanf("%d", &ano2);
    if (ehbissexto(ano2) == 1)
    {
        printf("O ano é bissexto");
    }
    else
    {
        printf("O ano não é bissexto");
    }
}
