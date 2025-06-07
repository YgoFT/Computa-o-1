#include <stdio.h>
int main() {
    char str[200];
    int i;
    int a = 0, e = 0, i2 = 0, o = 0, u = 0;

    printf("Digite uma frase:\n");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') a++;
        else if (str[i] == 'e') e++;
        else if (str[i] == 'i') i2++;
        else if (str[i] == 'o') o++;
        else if (str[i] == 'u') u++;
    }

    printf("a : ");
    for (i = 0; i < a; i++) printf("*");
    printf(" (%d)\n", a);

    printf("e : ");
    for (i = 0; i < e; i++) printf("*");
    printf(" (%d)\n", e);

    printf("i : ");
    for (i = 0; i < i2; i++) printf("*");
    printf(" (%d)\n", i2);

    printf("o : ");
    for (i = 0; i < o; i++) printf("*");
    printf(" (%d)\n", o);

    printf("u : ");
    for (i = 0; i < u; i++) printf("*");
    printf(" (%d)\n", u);

    return 0;
}
