#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N==0 || N<0)
    {
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    return 0;
}