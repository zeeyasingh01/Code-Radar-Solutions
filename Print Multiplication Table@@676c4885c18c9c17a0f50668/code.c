#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i;
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",N,i,N*i);
    }
    return 0;
}