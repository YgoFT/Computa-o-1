#include<stdio.h>
int main()
{
    float numero, result;
    int i;
    printf("escolha um numero: ");
    scanf("%f", &numero);
    for (i=0;i<=10;i++)
    {
        result = numero*i;
        printf("%.2f x %d = %.2f\n", numero, i, result);
    }
}
