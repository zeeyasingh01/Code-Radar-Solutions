#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i>=1 && i%1==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}