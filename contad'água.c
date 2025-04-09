#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int V, C;
    printf("valor total de água gasto na residência em m3: ");
    scanf("%d", &C);
    if(C<=10)
    {
        V=7;
        printf("valor que deve ser pago: %d", V);
    }
    else if(C>10 && C<=30)
    {
        V=7+C-10;
        printf("valor que deve ser pago: %d", V);
    }
    else if(C>30 && C<=100)
    {
        V=7+20+(C-30)*2;
        printf("valor que deve ser pago: %d", V);
    }
    else
    {
        V=7+20+140+(C-100)*3;
        printf("valor que deve ser pago: %d", V);
    }
}
