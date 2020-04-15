#include <stdio.h>
#include <ctype.h>
int main()
{

	char string[] = "Hai hui prin LUME.\n";
	char ch;
	int x=0;
	
	while( (ch = string[x]) != '\0') //'\0' --null character
	{
			if(isupper(ch))
				putchar(tolower(ch));
			else if (islower(ch))
				putchar(toupper(ch));
			else
				putchar(ch);
			x++;
	}
	
	return(0);
}
