#include<stdio.h>
float sum(){
{
   float a,b,sum;
   printf("Enter two numbers");
   scanf("%f%f", &a,&b);
   sum=a+b;
   printf("\nSum is = %f", sum);

}
{
   float a,b,sub;
   printf("Enter two numbers");
   scanf("%f%f", &a,&b);
   sub=a-b;
   printf("\nSub is = %f",sub;

}
{
   float a,b,div;
   printf("Enter two numbers");
   scanf("%f%f", &a,&b);
   div=a/b;
   printf("\nDiv is = %f",div);

}
{
   float a,b,mul;
   printf("Enter two numbers");
   scanf("%f%f", &a,&b);
   sum=a+b;
   printf("\nMul is = %f", mul);

}

main()
{
	sum();   //calling
	printf("\n");
	sum();
}

}
#include <stdio.h>

int star()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
int main()
{
    star();
    printf("\nhello");
    star();
}

