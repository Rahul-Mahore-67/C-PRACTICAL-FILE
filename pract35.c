#include<stdio.h>
int main(){
    int n;
    int sum=0;

    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter number");
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
    printf("%d\n",arr[i]);
    }
    for(int i=0;i<5;i++){
        sum+=arr[i];

    }
    printf("sum of number is %d",sum);
        return 0;

}