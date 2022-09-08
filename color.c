#include <windows.h>
#include <stdio.h>
void SetColor(int ForgC);

int main()
{
    SetColor(34);
    int i=1;
	while(i)
	{
		printf("%d",i);
		i++;
	}
    return 0;
}

void SetColor(int ForgC)
{
     WORD wColor;

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;


     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
