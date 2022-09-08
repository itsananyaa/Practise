#include<stdio.h>
#include<string.h>
void welcomeMessage()
{
    printf("\n\n\n\n\n");
    printf("\n\t\t\t =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t =                 WELCOME                   =");
    printf("\n\t\t\t =                   TO                      =");
    printf("\n\t\t\t =                 ELECTION                  =");
    printf("\n\t\t\t =                 MANAGEMET                 =");
    printf("\n\t\t\t =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}
void votee()
{
    int id;
    int ban={136};
    int vote={136};
    int valid={136};
    printf("Welcome to voting panel......");
    printf("Please enter your voter ID");
    scanf("%d",&id);
    if(id==valid)
    {
        if(id==ban)
        {
            if(id==vote)
            {
                FILE *fpt;
                char fname[1024]={"data.txt"};
                fpt=fopen(fname,"w");
                if (!fpt) {
                        printf("Can't open file\n");
                }
                char buf[1024];
                char name[200];
                int x;
                fgets(buf, 1024, fpt);
                while(fgets(buf, 1024, fpt))
                {
                    printf("Enter name :");
                    gets(name);
                    printf("Enter your vote");
                    scanf("%d",&x);
                }
                fclose(fpt);
                printf("Thanks for your precious vote..!");
                return;
                }
                else
                {
                    printf("Already voted");
                    return;
                }
            }
            else
            {
                printf("Sorry! Your ID is banned :(");
                return;
            }
        }
        else
        {
            printf("ID is invalid,try again.");
            return;
        }
}
void neww()
{
    FILE *fp;
    int yr,vt,id;
    int i,s,n;
    char br;
    char name[255];
    char j;
    char fName[1024]={"file.txt"};
    fp=fopen(fName,"w");
    printf("Enter Year: ");
    scanf("%d",&yr);
    printf("Enter Branch : ");
    scanf("%c",br);
    printf("Enter Max Votes : ");
    scanf("%d",&vt);
    printf("Enter no of candidate :");
    scanf("%d",&id);
    fprintf(fp, "%d %c %d %d", yr,br,vt,id);
    fclose(fp);
    printf("Info saved successfully. :) \n");
    fp = fopen(fName, "r");
    printf("\nNew election details :\n");
    while(fscanf(fp, "%d %c %d %d", &i,&j, &s, &n)!=EOF);
    printf("Year: %d\n",i);
    printf("Branch: %c\n",j);
    printf("Max vote: %d\n",s);
    printf("Total candidate's : %d\n",n);

}
void user()
{
    int username;
    int password;
    int a;
    printf("Enter your username:\n");
    scanf("%d",&username);
    printf("Enter your password:\n");
    scanf("%d",&password);
    if(username==6){
            if(password==123)
            {
                printf("\nWelcome.Login Success!");
                printf("\n     WELCOME TO ADMIN PANEL......!");
                printf("\n\t=   1.New election        =");
                printf("\n\t=   2.Previous election   =");
                printf("\n\t=   3.Check valid         =");
                printf("\n\t=   4.Result              =");
                printf("\n\t=   5.Log out             =");
                printf("\n\\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
                printf("\n\n\n\n\n");
                printf("\n\n\n\t\t\t Enter your choice to continue.....");
                scanf("%d",&a);
                switch(a)
                {
                    case 1:
                        {
                            neww();
                            break;
                        }
                    case 2:
                        {
                            pre();
                            break;
                        }
                    case 3:
                        {
                            check();
                            break;
                        }
                    case 4:
                        {
                            printf("Sorry! Result are not out yet..!");
                        }
                    case 5:
                        {
                            printf("Logging Out! See you again!");
                            return;
                        }
                    default:
                        {
                            printf("Invalid input...!");
                            return;
                        }
                    }
                }
                else
                {
                    printf("\nwrong password\n");
                main();
                }
                }

            else
            {
                printf("\nUser doesn't exist\n");
                main();
            }
}

void main()
{
    welcomeMessage();
    printf("\n\n\n\n\n");
    printf("\n\t\t\t        =-=-=-=-=-=MAIN MENU=-=-=-=-=-=");
    printf("\n\t\t\t        =           1. VOTING PANEL   =");
    printf("\n\t\t\t        =           2. ADMIN PANEL    =");
    printf("\n\t\t\t        =           3. EXIT           =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n\n\n\n");
    int a;
    printf("\n\n\n\t\t\t Enter your choice to continue.....");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
            votee();
            break;
        }
        case 2:
        {
            user();
            break;
        }

        default:
        {
            printf("Invalid input!");
        }
    }
}


