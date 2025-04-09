#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n=0;
    float media, a, b, c;
    while (n<3)
    {
        printf("escolha tres valores reais: ");
        scanf("%f %f %f", &a, &b, &c);
        media = (a*2+b*3+c*5)/10;
        printf("média = %.2f\n", media);
        n++;
    }
}
