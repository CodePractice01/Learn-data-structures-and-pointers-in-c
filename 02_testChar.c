#include <stdio.h>
#include <ctype.h>
int main()
{

	char string[] = "Nifty TEXT ! 123\n";
	char ch;
	int x=0;
	
	while( (ch = string[x]) != '\0')
	{
			//if(isalpha(ch))
			//if(isupper(ch))
			if(islower(ch))
				putchar('_'); // each letter from string is replaced with _____
			else
				putchar(ch);
			x++;
	}
	
	return(0);
}
