#include<stdio.h>
//write c program swap  two numbers.
int main(){
    int a,b,temp;
    printf("Enter the first number(A):");
    scanf("%d",&a);
    printf("enter a second number(B):");
    scanf("%d",&b);
    //swap the number
    temp =a;
    a = b;
    b =temp;
    //output the swapped numbers
    printf("After swapping :A=%d, B=%d\n",a,b);
    return 0;


}