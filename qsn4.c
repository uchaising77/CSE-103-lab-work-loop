#include <stdio.h>
int main()
{
int x,y ,i,c;
c=0;
for(i=0;i<5;i++)
    {
        printf("Enter The Pops: ");
        scanf("%d",&x);
        printf("Enter The Area: ");
        scanf("%d",&y);
        float density=x/y;
        if(density>=500)
        {
            c=c+1;
        }
    }
    printf("%d countries are the most populated country",c);
}
