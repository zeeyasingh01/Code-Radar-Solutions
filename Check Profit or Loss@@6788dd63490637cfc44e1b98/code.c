#include<stdio.h>
int main()
{
    int costprice,sellingprice;
    scanf("%d %d",&costprice,&sellingprice);
    if(sellingprice>costprice){
        printf("Profit");
    }
    else if(costprice>sellingprice){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}