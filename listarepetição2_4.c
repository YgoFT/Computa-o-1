#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int c=150, z=110, anos=1;
    while (c != z)
    {
        c = c+2;
        z = z+3;
        anos++;
    }
    printf("serão necessários %d anos para que Chico e Zé seja maior que Chico", anos);
    return 0;
}
