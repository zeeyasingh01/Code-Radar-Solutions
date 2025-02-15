#include<stdio.h>
int main()
{
    char ch,st;
    int i;
    scanf("%c %c",&ch,&st);
    scanf("%d",&i);
    if(ch=='a','i','e','o','u'){
        printf("Vowel");
    }
    else if(st>a && st<z){
        printf("Consonent");

    }
    else if(i>0 && i<100){
        printf("Digit");
    }
    else{
        printf("Special Chracter");
    }
    return 0;
}