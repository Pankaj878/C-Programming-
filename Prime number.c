#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,n,count=0;
    scanf("%d",&n);
    for(a=1; a<=n; a++)
    {
        for(b=1; b<=a; b++)
        {
            if(a%b==0)
            {
                count++;
            }

        }
        if (count==2)
            printf("%d ",a);
        count=0;
    }
}
