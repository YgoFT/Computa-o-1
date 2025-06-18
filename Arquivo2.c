#include<stdio.h>
#include<stdlib.h>
#define FILE_PATH "teste2.txt"
int main()
{
    FILE * meu_arquivo;
    char linha[1024];
    meu_arquivo = fopen(FILE_PATH, "r");

    if(meu_arquivo == NULL)
    {
        printf("não consegui achar o arquivo");
        return 1;
    }

    while(fgets(linha, sizeof(linha), meu_arquivo) != NULL)
    {
        double numero = atof(linha);
        printf("%.2f\n", numero);
    }

    fclose(meu_arquivo);

    return 0;
}
