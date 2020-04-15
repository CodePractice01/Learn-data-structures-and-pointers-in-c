#include <stdio.h>

int main()
{
	char *veeps[5] = { "Adams", "Jefferson", "Burr", "Clinton", "Gerry" };
	int x;

	for(x=0;x<5;x++)
	//	printf("%c\n",**(veeps+x));
	
		//printf("%c\n",*(*(veeps+x)) ); // returns the each letter of the array
		//veeps ---array of pointers
		//**(veeps+x) --pointer to pointer
		//first asterisk = base of the address (*(veeps+x).
		
		
		
		printf("%c\n",*(*(veeps+x)+1));
		//*(veeps+x) = it's and address
		//*(veeps+x)+1) = get next memory location
		//*(*(veeps+x)+1) = * fetches that character from the second location
		


	return(0);
}

