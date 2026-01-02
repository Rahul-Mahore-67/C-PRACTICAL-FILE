#include<stdio.h>
int main(){
    int num=3;
   int arr[5];
   for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);

   }
   for(int i=0;i<5;i++){
    printf("%d",arr[i]);

   }
   for(int i=num;i<4;i++){
    arr[i]=arr[i+1];

   }
   for(int i=0;i<4;i++){
    printf("\n%d",arr[i]);
   }

    return 0;

}