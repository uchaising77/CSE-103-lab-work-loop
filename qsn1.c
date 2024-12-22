#include<stdio.h>
int main(){
    int n,age,c=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter age of person : ");
        scanf("%d",&age);
        if(age>=13&&age<=19){
            c++;

        }
    }
    printf("number of teenager %d\n",c);
    return 0;
}
