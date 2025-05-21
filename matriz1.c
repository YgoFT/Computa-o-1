#include<stdio.h>
#include<time.h>
#define NL 5
#define NC 5
int main()
{
    int i,j,m[NL][NC];
    srand(time(NULL));
    printf("Matriz normal\n");
    for (i=0; i<NL; i++)
    {
        for (j=0; j<NC; j++)
        {
            m[i][j] = rand()%100+1;
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
    printf("Matriz transposta\n");
    for (i=0; i<NL; i++)
    {
        for (j=0; j<NC; j++)
        {
            printf("%4d", m[j][i]);
        }
        printf("\n");
    }
}
