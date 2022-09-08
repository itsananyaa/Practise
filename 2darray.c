#include<stdio.h>
int main()
{
    int x[3][4];
    int i,j;
    for(i=0;i<3;i++)
    {
       for(j=0;j<4;j++)
        {
            printf("For x[%d][%d]:",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("Required 2 D array :");
    for(i=0;i<3;i++)
    {
       printf("\n ");
       for(j=0;j<4;j++)
        {
            printf("%d",x[i][j]);
        }
    }

}
