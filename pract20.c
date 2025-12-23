#include<stdio.h>
int main(){
    int age;
    int total=0;
    for(int i=1;i<=10;i++){
    
        printf("Enter age of employee %d:",i);
        scanf("%d",&age);
    if(age>=30){
        total+=1;
    }
    }

    printf("Employees aged 30 or above=%d",total);
    
    return 0;

}