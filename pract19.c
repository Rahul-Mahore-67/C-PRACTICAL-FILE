#include<stdio.h>
int main(){
    int unit;
    int  total=0;
    for(int i=1;i<=7;i++){
        printf("Enter units used on day %d:",i);
        scanf("%d",&unit);
        total+=unit;
    }
 printf("Total Electricity units used in week =%d",total);
    return 0;

}
