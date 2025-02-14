#include<stdio.h>
int main()
{
    char name;
    int age;
    char hobby;
    printf("name:\n");
    scanf("%s\n",&name);
    printf("age:\n");
    scanf("%d\n",&age);
    printf("hobby:\n");
    scanf("%s\n",&hobby);
    printf("%s\n%d\n%s\n",name,age,hobby);
    return 0;

}