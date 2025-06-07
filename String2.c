#include <stdio.h>
#include <string.h>

int main() {
    char frase1[100], frase2[100], palavra1[20][20], palavra2[20][20];
    int i, j = 0, k = 0;
    int count1 = 0, count2 = 0;
    printf("Digite a primeira frase:\n");
    fgets(frase1, sizeof(frase1), stdin);
    frase1[strcspn(frase1, "\n")] = '\0';
    printf("Digite a segunda frase:\n");
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0';
    char *token = strtok(frase1, " ");
    while (token != NULL) {
        strcpy(palavra1[count1++], token);
        token = strtok(NULL, " ");
    }
    token = strtok(frase2, " ");
    while (token != NULL) {
        strcpy(palavra2[count2++], token);
        token = strtok(NULL, " ");
    }
    printf("Frase3: ");
    i = 0;
    while (i < count1 || i < count2) {
        if (i < count1) {
            printf("%s ", palavra1[i]);
        }
        if (i < count2) {
            printf("%s ", palavra2[i]);
        }
        i++;
    }
    printf("\n");
    return 0;
}
