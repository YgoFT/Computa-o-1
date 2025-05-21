#include<stdio.h>
int main()
{
    int i, j, N;
    printf("N: ");
    scanf("%d", &N);
    int m[N][j];
    for (i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(j == 0 || j == i)
            {
                m[i][j]=1;
            }
            else
            {
                m[i][j]=m[i-1][j-1]+m[i-1][j];
            }
        }
    }
    printf("Triângulo de pascal:\n");
    for (i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(m[i][j] !=0)
            {
                printf("%4d", m[i][j]);
            }
        }
        printf("\n");
    }
}
