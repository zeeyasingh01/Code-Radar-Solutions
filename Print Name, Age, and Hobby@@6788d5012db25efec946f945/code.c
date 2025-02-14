#include<stdio.h>
int main()
{
    char name;
    int age;
    char hobby;
    printf("enter the name:\n");
    scanf("%s\n",&name);
    printf("enter age:\n");
    scanf("%d\n",&age);
    printf("enter the hobby:\n");
    scanf("%s\n",&hobby);
    printf("%s\n%d\n%s\n",name,age,hobby);
    return 0;

}