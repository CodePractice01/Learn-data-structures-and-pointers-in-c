#include <stdio.h>
#include <ctype.h>
int main()
{

	char string[] = "My mom types her email in ALL CAPS.\n";
	char ch;
	int x=0;
	
	while( (ch = string[x]) != '\0')
	{
			putchar(tolower(ch)); //return string lowercase
			x++;
	}
	
	return(0);
}
