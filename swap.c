#include<stdio.h>
int main(){
int a,b,temp;
printf("Enter valye for a");
scanf("%d",&a);
printf("Enter value for b");
scanf("%d",&b);
printf("Value of a : %d, Value of b %d",a,b);
if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
        printf("A is %d, B is %d \n",a,b);
    }
else
    {
        printf("A is ");
    }
}





