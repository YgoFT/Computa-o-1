#include<stdio.h>
int main ()
{
    float alt, base, perimetro, rodape, area;
    printf("digite a altua do quarto: ");
    scanf("%f", &alt);
    printf("digite a base do quarto; ");
    scanf("%f", &base);
    perimetro = (2*base)+(2*alt);
    rodape = perimetro-0.8;
    area = base*alt;
    printf("a area do quarto é de %.2f metros quadrados\n", area);
    printf("o perimetro do quarto é de %.2f metros\n", perimetro);
    printf("o rodape do quarto deve ser de %.2f metros\n", rodape);
}
