#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i;
    for(i=1;i<=N;i++){
        sum+=i;
    }
    printf("%d\n",N,sum);
    return 0;

}