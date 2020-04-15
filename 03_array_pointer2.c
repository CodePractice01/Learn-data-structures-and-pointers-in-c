#include <stdio.h>

int main()
{
	char *veeps[5] = { "Adams", "Jefferson", "Burr", "Clinton", "Gerry" };
	int x;

	for(x=0;x<5;x++)
		printf("%s\n",*(veeps+x)); 
		// veeps+x -- repres the element of the array which is the address
		//*(veeps+x) -- asterix fech the value of that address ^ which is each of strings
	return(0);
}

