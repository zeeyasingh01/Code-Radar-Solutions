#include<stdio.h>
int main()
{
    char ch;
    
    scanf("%c",&ch);
    
    if(ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("Vowel");
    }
    else if(ch>='A'&& ch<='Z'||ch>='a' && ch<='z'){
        printf("Consonant");

    }
    else if(ch>='0' &&ch<='9'){
        printf("Digit");
    
    }
    else{
        printf("Special Character");
    }
    return 0;
}