#include<stdio.h>
int main()
{
    int a,b,c,sum,average;
    printf("enter a:\t");
    scanf("%d",&a);
    printf("enter b:\t");
    scanf("%d",&b);
    printf("enter c:\t");
    scanf("%d",&c);
    sum = a+b+c;
    average = sum/3;
    printf("sum is:%d",sum);
    printf("average is:%d",average);
    
    return 0;

}