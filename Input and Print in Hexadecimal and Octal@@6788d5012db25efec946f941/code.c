#include<stdio.h>
int main()
{
    int number;
    char ch;
    scanf("%c %d",&ch, &number);
    printf("Hexadecimal: %c"\n,ch);
    printf("Octal: %d",number);
    return 0;
}