#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i=1;
    float v, n, media, p;
    printf("digite um valor inteiro (para finalizar, digite -1000): ");
    scanf("%f", &n);
    v = n;
    while(n != -1000)
    {
        printf("digite um valor inteiro (para finalizar, digite -1000): ");
        scanf("%f", &n);
        if(n>0)
        {
            p = p+n;
            i++;
        }
        if(v<n)
        {
            v = n;
        }
    }
    media = p/i;
    printf("a média dos números positivos foi: %.2f\n", media);
    printf("o valor mais alto foi: %.2f\n", v);
    return 0;
}
