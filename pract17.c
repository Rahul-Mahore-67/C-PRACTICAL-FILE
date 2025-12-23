#include<stdio.h>
int main(){
int month;
printf("enter month(1-12)");
scanf("%d",&month);
switch(month){
case 1: case 3: case 5: case 7: case 8: case 12:
printf("number of days:31\n");
break;
case 4: case 6: case 9: case 11:
printf("number of days :30\n");
break;
case 2: printf("number of days 28or 29(leap year)\n");
break;
default:printf("invalid month number");

}
return 0;

}