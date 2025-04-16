#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n=0,i;
    printf("digite um número (o programa deve parar se o valor for <=0): ");
    scanf("%f", &n);
    i=n;
    while(n>0)
    {
        printf("digite um número (o programa deve parar se o valor for <=0): ");
        scanf("%f", &n);
        if(n>i)
        {
            i=n;
        }
    }
    printf("o maior valor foi: %.2f", i);
    return 0;
}
