#include<stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            if(1==1||i==N||j==1||j==N){
                printf("* ")
            }
            else{
                printf("");
            }

        }
        printf("\n");
    }
    return 0;
}