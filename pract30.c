#include<stdio.h>
int swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b= temp;
    printf("a=%d and b=%d",*a,*b);
}
int main(){
    int x=2;
    int y=3;
    swap(&x,&y);
    printf("x=%d\nand y=%d",x,y);

    return 0;

}