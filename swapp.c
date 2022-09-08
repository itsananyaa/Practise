#include<stdio.h>
int swap();
int main()
{
    int x,y,swapp=0;
    printf("Enter nos: ");
    scanf("%d %d",&x,&y);
    printf("Original : %d %d",x,y);
    swapp=swap(x,y);
}
int swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("\nSwapped nos: %d %d",a,b);

}
