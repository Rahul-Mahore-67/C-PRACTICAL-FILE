#include<stdio.h>
int main(){
    int units;
    float rate,total,surcharge;
    printf("enter a number of units consume: ");
    scanf("%d",&units);
    if(units<=100){
        rate=3.0;
    }
    else if(units<=200){
        rate=4.0;

    }
    else{
        rate=5.0;

    }
    total=units*rate;
    
    if(total>1000){
        surcharge=total*0.10;

    }
    total=total+surcharge;
    printf("electricity bill=%.2f\n",total);
    return 0;

}