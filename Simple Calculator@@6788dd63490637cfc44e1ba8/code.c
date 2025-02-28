#include<stdio.h>
int main()
{
    int a,b,op;

    scanf("%d %d %d",&a,&b,&op);
    switch(op){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("error");
        break;
    }
    return 0;
}