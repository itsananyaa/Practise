#include<stdio.h>
int main()
{
    int x[5],i,n,found;
    for(i=0;i<5;i++)
    {
       printf("Enter values : ");
       scanf("%d",&x[i]);
    }
    printf("\nEnter num : ");
    scanf("%d",&n);
    for(i=0;i<=5;i++)
    {
        if(n==x[i])
        {
            found++;
            break;
        }
    }
    if(found>0)
    {
        printf("Present");
    }
    else
    {
        printf("Not present");
    }
    return 0;
}


