#include<stdio.h>
void main()
{
    char x;
    int lowercase,uppercase;
    printf("Enter alphabet :  \n");
    scanf("%c",&x);
    lowercase=(x=='a'||x=='e'||x=='i'||x=='o'||x=='u');
    uppercase=(x=='A'||x=='E'||x=='I'||x=='O'||x=='U');
    if(x=uppercase||lowercase)
        printf("It's a vowel ");
    else
        printf("It's a consonent");
    getch();

}
