#include<stdio.h>
int main()
{
    float crit, dmg;
    int forc, lvl_arma;
    printf("Força do personagem (1 a 100): ");
    scanf("%d", &forc);
    printf("Nivel da arma (1 a 50): ");
    scanf("%d", &lvl_arma);
    printf("Multiplicador de critico (1.0 a 2.0): ");
    scanf("%f", &crit);
    dmg = forc*lvl_arma*crit;
    if(dmg>5000)
    {
        printf("%.2f DANO CRÍTICO MASSIVO!", dmg);
    }
    else if(1000<dmg<5000)
    {
        printf("%.2f DANO CRÍTICO!", dmg);
    }
    else
    {
        printf("%.2f dano normal.", dmg);
    }
}
