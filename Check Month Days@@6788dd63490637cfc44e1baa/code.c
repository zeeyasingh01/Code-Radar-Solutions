#include<stdio.h>
int main()
{
    int days;
    scanf("%d",&days);
    switch(days){
        case 1:
        printf("31");
        break;
        case 2:
        pritf("28");
        break;
        case 3:
        printf("31");
        break;
        case 4:
        printf("30");
        break;
        case 5:
        printf("31");
        break;
        case 6:
        printf("30");
        break;
        case 7:
        printf("31");
        break;
        case 8:
        printf("31");
        break;
        case 9:
        printf("30");
        break;
        case 10:
        printf("31");
        break;
        case 11:
        printf("30");
        break;
        case 12:
        printf("31");
        break;
        default:
        printf("Invalid month");
        break;

    }
    return 0;
}    