#include<stdio.h>
#include<math.h>
int main()
{
    float alt, larg, area, quantidade;
    int quantr;
    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &alt);
    printf("Digite a largura da parede (em metros): ");
    scanf("%f", &larg);
    area = alt*larg;
    quantidade = area/2;
    quantr = floor(quantidade);
    if(quantidade == quantr)
    {
        printf("A quantidade de tinta necessária será de %.0f litros\n", quantidade);
        printf("A área total é de %.2f metros quadrados\n", area);
    }
    else
    {
        printf("A quantidade de tinta necerrária será de %.0f litros\n", quantidade+1);
        printf("A área total é de %.2f metros quadrados\n", area);
    }
    return 0;
}
