#include<stdio.h>
int main(){
    int i,x,total=0;
    for(i=1;i<=30;i++){
        printf("day %d (1=present ,0=absent):",i);
        scanf("%d",&x);
        total+=x;

    }
    printf("total present day =%d\n",total);
    return 0;

}