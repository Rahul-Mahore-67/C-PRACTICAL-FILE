#include<stdio.h>
int main(){
    float distance,total_distance=0.0;
    int day;
    for(day=1;day<=30;day++){
        printf("Enter distance walked on day %d (km):",day);
        scanf("%f",&distance);
        total_distance+=distance;

    }
    printf("Total distance walked=%.2f km\n",total_distance);
    return 0;


}