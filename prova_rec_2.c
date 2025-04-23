#include<stdio.h>
int main()
{
    int numero_base, com, fim, resto, soma=0, inicio;
    printf("escreva um número base: ");
    scanf("%d", &numero_base);
    printf("escreva um número para o começo do intervalo: ");
    scanf("%d", &com);
    inicio = com;
    printf("escreva um número para o começo do intervalo: ");
    scanf("%d", &fim);
    while (com!=fim+1)
    {
        resto = com%numero_base;
        if (resto == 0)
        {
            soma=soma+com;
        }
        com++;
    }
    printf("a soma dos múltiplos de %d, dentro do intervalo de %d até %d, é %d", numero_base, inicio, fim, soma);
}
