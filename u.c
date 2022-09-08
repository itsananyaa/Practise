#include<stdio.h>
#include<string.h>
struct book
{
     int bno,bcost,baccno;
     char bname[20],bpub[20],bauthor[20];
}p[10];
int main()
{
     int n,i,ch;
     char pubname[20],authorname[20];
     for(i=0;i<4;i++)
     {
          printf("\tEnter Details of Book-%d",i+1);
          printf("\n*********************************************\n");
          printf("Book Name        : ");
          scanf("%s",p[i].bname);
          printf("Author Name     : ");
          scanf("%s",p[i].bauthor);
          printf("Page no : ");
          scanf("%s",p[i].bpub);
          printf("Publication year     : ");
          scanf("%d",&p[i].bno);
          printf("Cost             : ");
          scanf("%d",&p[i].bcost);
          printf("************************************************\n");
     }
for(i=0;i<4;i++)
{
    printf("\n===================================================\n");
    printf("\nBook Name :%s",p[i].bname);
    printf("\nAuthor Name :%s",p[i].bauthor);
    printf("\nPage no :%s",p[i].bpub);
    printf("\nBook Number :%d",p[i].bno);
    printf("\nCost :  %d",p[i].bcost);
    printf("\n====================================================\n");
}
}


