#include<stdio.h>
#include<stdlib.h>
#define FILE_PATH "teste1.txt"
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
        printf("%s", linha);
    }

    fclose(meu_arquivo);

    return 0;
}
