#include<stdio.h>
int main()
{
    int i,j,N;
    char ch;
    scanf("%d",&N);
    scanF("%c",&ch);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}