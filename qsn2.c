#include<stdio.h>
int main(){
    int n,voter,c=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the voter of person %d\n",i);
        scanf("%d",&voter);
        if(voter>=18){
            c++;
        }
    }
    printf("number of voter %d\n",c);
    return 0;
}
