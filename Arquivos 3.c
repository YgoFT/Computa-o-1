#include<stdio.h>
#include<stdlib.h>
#define FILE_PATH "teste1.txt"
int main()
{
    FILE *arq_entrada, *arq_saida;
    char linha[1024];
    int contador = 1;

    arq_entrada = fopen("teste1.txt", "r");
    arq_saida = fopen("teste1_.txt", "w");

    if (arq_entrada == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    while(fgets(linha, sizeof(linha), arq_entrada) != NULL)
    {
        fprintf(arq_saida, "%d. %s", contador, linha);
        printf("%d. %s", contador, linha);
        contador++;
    }

    printf("Arquivo gravado com sucesso como teste1_.txt\n");
    fclose(arq_entrada);
    fclose(arq_saida);

    return 0;
}
