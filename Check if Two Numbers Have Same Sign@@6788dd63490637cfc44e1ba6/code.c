#include<stdio.h>
int mian()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=0||b>=0)
    {
        printf("Same Sign");
    }
    else{
        printf("Diffrent Sign");
    }
    return 0;
}