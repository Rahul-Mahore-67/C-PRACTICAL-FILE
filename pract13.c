#include<stdio.h>
int main(){
int sub1,sub2,sub3,total,average;
printf("enter a mark of three subjects:");
scanf("%d %d %d" ,&sub1,&sub2,&sub3);
total=sub1+sub2+sub3;
average=total/3;
if(average>=90){
    printf("grade A\n");
}
else if(90 > average && average >=75){
    printf("grade B\n");

}
else if(75 > average && average >=50){
    printf("grade C\n");
}
else{
    printf("grade F\n");
}
printf("total mark:%d\n",total);
printf("average mark:%d\n",average);
return 0;

}