#include<stdio.h>
#include<string.h>
int main()
{
    char nome1[100];
    char nome2[100];
    char nome3[100];
    char nomeExtra[100];
    printf("Primeiro nome: ");
    scanf("%s", nome1);
    printf("Segundo nome: ");
    scanf("%s", nome2);
    printf("Terceiro nome: ");
    scanf("%s", nome3);
    for (int i=0; i>=0; i)
    {
        printf("Escreva um nome: ");
        scanf("%s", nomeExtra);
        if (strcasecmp(nomeExtra, nome1) == 0)
        {
            printf("%s é igual ao primeiro nome.", nomeExtra);
            i--;
        }
        if (strcasecmp(nomeExtra, nome2) == 0)
        {
            printf("%s é igual ao segundo nome.", nomeExtra);
            i--;
        }
        if (strcasecmp(nomeExtra, nome3) == 0)
        {
            printf("%s é igual ao terceiro nome.", nomeExtra);
            i--;
        }
        else
        {
            printf("Este nome não esta entre os três primeiros nomes. \n");
        }
    }
    return 0;
}
