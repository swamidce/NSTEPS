#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,temp,val;
        scanf("%d%d",&x,&y);
        if(x==0||x==1)
        {
            if(x==y)
                printf("%d\n",x);
            else
                printf("No Number\n");
        }
        else
        {
            if(y==x||y==(x-2))
            {
                if(x%2)
                    temp=x-1;
                else
               temp=x;
                val=((temp-2)/2)*4+1;
                if(x%2)
                {
                    if(y==x)
                        printf("%d\n",val+4);
                    else
                        printf("%d\n",val+2);
                }
                else
                {
                    if(y==x)
                        printf("%d\n",val+3);
                    else
                        printf("%d\n",val+1);
                }
            }
            else
                printf("No Number\n");
        }
    }
    return 0;
}
