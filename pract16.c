 #include <stdio.h>

int main() {
int color;
printf("enter a code (1-3):");
scanf("%d",&color);
switch(color){
    case 1:printf("red=stop");
    break;
    case 2:printf("yellow=ready");
    break;
    case 3:printf("green=go");
    break;
    default:printf("enter a valid code");
}
return 0;


}