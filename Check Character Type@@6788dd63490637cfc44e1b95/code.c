#include<stdio.h>
int main()
{
    char ch;
    
    scanf("%c",&ch);
    
    if(ch=='a','i','e','o','u'||ch=='A','E',I','O','U'){
        printf("Vowel");
    }
    else if(ch>='A'&& ch<='Z'||ch>='a' && ch<='z'){
        printf("Consonent");

    }
    else if(ch>=0 &&ch<=9){
        printf("Digits");
    
    }
    else{
        printf("Special Chracter");
    }
    return 0;
}