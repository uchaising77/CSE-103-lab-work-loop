#include<stdio.h>
int main(){
    int n;
    printf("Enter a number of days:");
    scanf("%d",&n);
    int temperature,totalTem=0;
    int count=0;
    for(int i=0;i<n;i++){
        printf("Enter temperature of day %d:",i);
        scanf("%d",&temperature);
        if(temperature>30){

            count++;
            totalTem+=temperature;
        }
    }
    if(count>0){
        float averageTem=totalTem/(float)count;
        printf("The average temperature is %f\n",averageTem);
    }
    else{
        printf("No days with temperature greater than 30 c\n");

    }
    return 0;
}
