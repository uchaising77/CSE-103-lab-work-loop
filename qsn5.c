#include <stdio.h>
int main()
{
float x ,i, c ;
c=0;
for(i=0;i<5;i++)
    {
        printf("Enter The CGPA: ");
        scanf("%f",&x);
        if(x>=3.5 && x<=4.00)
        {
            c=c+1;
        }
    }
    printf("%f persons secured above 3.5 CGPA",c);
return 0;    
}
‎


