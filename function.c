#include<stdio.h>
void italy();
void brazil();
void argentina();
void main()
{
    printf("I am in main");
    italy();
    printf("\nIm back in main");
}
void italy()
{
    printf("\nIm in italy");
    brazil();
    printf("\nIm back in italy");
}
void brazil()
{
    printf("\nIm in brazil");
    argentina();
}
void argentina()
{
    printf("\nIm in argentina");
}
