#include<stdio.h>
int main()
{
    int i,j,N,k=0;
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        for(j=1;j<=N-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}