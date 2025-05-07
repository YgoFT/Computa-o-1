#include<stdio.h>
int arredonda (float x)
{
    float decimal = x - (int)x;
    printf("%f", decimal);
    if (decimal >= 0.5)
    {
        return x - decimal + 1;
    }
    else if (decimal < 0.5 && decimal >= 0)
    {
        return x - decimal;
    }
    else if (decimal < 0 && decimal > -0.5)
    {
        return x - decimal;
    }
    else
    {
        return x - decimal - 1;
    }
}

int main()
{
    float numero;
    printf("Digite um valor para ser arredondado: ");
    scanf("%f", &numero);
    printf("O valor %f arredondado é: %d\n", numero, arredonda(numero));
}
