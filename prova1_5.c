#include<stdio.h>
int main()
{
    int numero, i=1;
    printf("digite um numero: ");
    scanf("%d", &numero);
    while (i<=numero)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
