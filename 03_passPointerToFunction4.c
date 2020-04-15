#include <stdio.h>

void change(char s[])
{
	//s[1] = 'a';
	
	*(s+1) ='a';
	//s+1 = repest the second character in the string
	// the asterix operator fetcher that character
}

int main()
{
	char pet[] = "cot";

	puts(pet);
	change(pet);
	puts(pet);

	return(0);
}
