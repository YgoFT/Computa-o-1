#include <stdio.h>
#include <ctype.h>
#include <string.h>

int eh_vogal(char c) {
    c = toupper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
int main() {
    char nome[100], bairro[100], senha[200];
    int i, j = 0;
    printf("Digite o nome:\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Digite o bairro:\n");
    fgets(bairro, sizeof(bairro), stdin);
    bairro[strcspn(bairro, "\n")] = '\0';
    for (i = 0; nome[i] != '\0'; i++) {
        if (eh_vogal(nome[i])) {
            senha[j++] = toupper(nome[i]);
        }
    }
    for (i = 0; bairro[i] != '\0'; i++) {
        if (eh_vogal(bairro[i])) {
            senha[j++] = toupper(bairro[i]);
        }
    }
    senha[j] = '\0';
    printf("Senha gerada: %s\n", senha);
    return 0;
}
