#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n=0,i;
    printf("Digite sua senha: ");
    scanf("%d", &n);
    while(n != 2002)
    {
        printf("Senha inválida.\n");
        printf("Digite sua senha novamente: ");
        scanf("%d", &n);
    }
    printf("Acesso permitido");
    return 0;
}
