#include <stdio.h>


int main()
{
	int alpha;

	int *ptr;
	
	alpha = 99;
	ptr = &alpha;
	
	printf ("Variable apha = %d\n", alpha);
	
	*ptr=66;
	
	printf("Variable alpha = %d\n",alpha);

	return(0);
}

