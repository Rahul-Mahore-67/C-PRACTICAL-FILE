#include<stdio.h>
int main(){
    for(int  i=1;i<=7;i++){
        if(i==1){
        
            printf("monday");
            printf("\n");
        }
        else if(i==2){
            printf("tuesday");
            printf("\n");
        }
        else if(i==3){
            printf("wednesday");

            printf("\n");
        }
        else if(i==4){
            printf("thursday");
            printf("\n");

        }
        else if(i==5){
            printf("friday");
            printf("\n");
        }
        else if(i==6){
            printf("saturday");
            printf("\n");
        }
        else{
            printf("sunnday");
            printf("\n");
        }
        for(int j=1;j<=6;j++){
          
            if(i==3&&j<=4){
                  printf("lecture %d\n",j);}
        
        if(i==6&&j<=2){
            printf("lecture %d\n",j);

        }
        if(i==7&&j==1){
            printf("holiday");
        }
        if(i==1||i==2||i==4||i==5){
            
            printf("lecture %d\n",j);
        }
}
    }
    
    return 0;
}