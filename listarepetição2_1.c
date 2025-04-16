#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n=0;
    printf("digite valores inteiros (o programa deve parar se o valor for <=0): ");
    scanf("%d", &n);
    while(n>0)
    {
    printf("digite valores inteiros (o programa deve parar se o valor for <=0): ");
    scanf("%d", &n);
    }

    return 0;
}
