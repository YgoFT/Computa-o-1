#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, i, r;
    printf("digite o valor de n: ");
    scanf("%d", &n);
    while(i<100)
    {
        r = i % n;
        if(r==2)
        {
            printf("%d\n", i);
        }
        i++;
    }
}
