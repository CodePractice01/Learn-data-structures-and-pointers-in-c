#include <stdio.h>

int main()
{

	int a;
	
	while(1)
	{
			a= getchar();
			//EOF constant which is an integer and it's the value returned when the end of file si read
			//EOF character : CTRL+Z -windows
			//EOF = CTRL+D in Unix
			if(a==EOF) 
			{
				break;
			}
			putchar(a);
	}
	
	return(0);
}
