#include<stdio.h>
int main()
{
    char name[1000], hobby[1000];
    int age;
    printf("name:\n");
    scanf("%s\n",&name);
    printf("age:\n");
    scanf("%d\n",&age);
    printf("hobby:\n");
    scanf("%s\n",&hobby);
    printf("%s\n%d\n%s\n",name,age,hobby);
    return 0;

}