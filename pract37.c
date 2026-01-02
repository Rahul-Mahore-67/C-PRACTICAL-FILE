#include<stdio.h>
int main(){
    int num=2;

    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(arr[i]==num){
            printf("search number is:%d",num);

        }
    }

    return 0;

}