#include<stdio.h>
int main()
{
    int a,b;
    char op;

    scanf("%d %d",&a,&b);
    scanf("%c",&op);
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
        if(b!=0)
        {
            printf("%d\n",a/b);
        }
        else{
            printf("Error: Division by zero\n");
        }
        break;
        default:
        printf("Error");
        break;
    }
    return 0;
}