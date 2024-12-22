#include <stdio.h>
int main()
{
int x,y ,i,q,w,e,r;
q=0;w=0;e=0;r=0;
for(i=0;i<5;i++)
    {
        printf("Enter The X: ");
        scanf("%d",&x);
        printf("Enter The Y: ");
        scanf("%d",&y);
        if(x>0 && y>0)
        {
            q=q+1;
        }
        else if(x<0 && y>0)
        {
            w=w+1;
        }
        else if(x<0 && y<0)
        {
            e=e+1;
        }
        else if(x>0 && y<0)
        {
            r=r+1;
        }
    }
    printf("%d points are in 1st co-ordinate\n",q);
    printf("%d points are in 2nd co-ordinate\n",w);
    printf("%d points are in 3rd co-ordinate\n",e);
    printf("%d points are in 4th co-ordinate\n",r);
return 0;    
}
‎


