#include<stdio.h>
int main(){
    int intvar=20;
    float floatvar=6.5f;
    char charvar='A';
    double doublevar=30.99;
    printf("Integer value :%d, size: %zu bytes\n", intvar, sizeof(intvar));
    printf("Float value :%.2f, size: %zu bytes\n",floatvar, sizeof(floatvar));
    printf("Character value :%c,size : %zu bytes\n",charvar,sizeof(charvar));
    printf("Double value : %.2lf,size: %zu bytes\n",doublevar,sizeof(doublevar));
    return 0;
}