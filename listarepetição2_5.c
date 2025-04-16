#include<stdio.h>
#include<locale.h>
#include<time.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
 //   int g, c=111;
    int g, c = rand() % 501;
    while(g != c)
    {
        printf("Adivinhe o número de 0 a 500 gerado aleatóriamente pelo código: ");
        scanf("%d", &g);
    }
    printf("parabéns!!");
    return 0;
}
