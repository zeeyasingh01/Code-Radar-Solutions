#include<stdio.h>
int main()
{
    char name;
    int age;
    char hobby;
    printf("enter the name:\n");
    scanf("%c\n",&name);
    printf("enter age:\n");
    scanf("%d\n",&age);
    printf("enter the hobby:\n");
    scanf("%c\n",&hobby);
    printf("%c\n%d\n%c\n",name,age,hobby);
    return 0;

}