#include<stdio.h>
int main()
{
    int a,b,c;
    float average;
    printf("enter a:\t");
    scanf("%d",&a);
    printf("enter b:\t");
    scanf("%d",&b);
    printf("enter c:\t");
    scanf("%d",&c);
    
    average = (a+b+c)/3.0;
   
    printf("average:%2f",average);

    return 0;

}