#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, media, frq;
    printf("Digite as três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite sua frequencia: ");
    scanf("%f", &frq);
    media = (n1+n2+n3)/3;
    if (media>8 && frq>=75)
    {
        printf("Média igual a %.2f\nFrequencia igual a %.2f\naprovado com distinção", media, frq);
    }
    else if (media >= 6 && frq>=75)
    {
        printf("Média igual a %.2f\nFrequencia igual a %.2f\nAprovado direto", media, frq);
    }
    else if (media >=4 || frq>=75)
    {
        printf("média igual a %.2f\nFrequencia igual a %.2f\nVai para final", media, frq);
    }
    else
    {
        printf("média igual a %.2f\nFrequencia igual a %.2f\nReprovado direto", media, frq);
    }
    return 0;
}
