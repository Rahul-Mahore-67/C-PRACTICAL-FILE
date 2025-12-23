#include<stdio.h>
int main(){
    int price;
    float  total=0;0;
    for(int i=1;i<=5;i++){
    printf("Enter price of item%d:",i);
    scanf("%d",&price);
    total+=price;

    }
    printf("total  bill %f",total);
    return 0;

}