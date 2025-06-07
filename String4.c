#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char *palavra;
    printf("Digite o nome completo:\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Abreviatura: ");
    palavra = strtok(nome, " ");
    while (palavra != NULL) {
        if (strlen(palavra) <= 2) {
            printf("%s ", palavra);
        } else {
            printf("%c. ", palavra[0]);
        }
        palavra = strtok(NULL, " ");
    }
    printf("\n");
    return 0;
}
