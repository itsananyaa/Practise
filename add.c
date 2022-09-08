#include<stdio.h>
int sum(int x);
main()
{
    int sum;
    sum=add();
    printf("%d",sum);
}
int add()
{
    int i,y;
    for(i=0;i<=10;i++)
    {
        y=y+i;
    }
    return y;
}
