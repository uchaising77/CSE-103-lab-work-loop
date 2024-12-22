#include<stdio.h>
int main(){
    int n,age;
    int childcount=0,teenagercount=0,seniorcitizencount=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the age of person %d\n",i );
        scanf("%d",&age);
        if(age>=0&&age<=12){
            childcount++;
        }
        else if(age>=13&&age<=19){
            teenagercount++;
        }
        else if(age>=65){
            seniorcitizencount++;
        }
    }
        printf("number of child %d\n",childcount);
        printf("number of teenager %d\n",teenagercount);
        printf("number of senior citizen %d\n",seniorcitizencount);
        return 0;
}
