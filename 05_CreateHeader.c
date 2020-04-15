#include "05_myheader.h"

/*
 * in your header file can include another header file
 * function prototypes
 * constant expressions
external variable declarations
* typedefs
* 
 * '*/

int main()
{
	struct data stuff[SIZE];
	int x;
	
	/* seed randomizer */
	srand( (unsigned)time(NULL) );

	for(x=0;x<SIZE;x++)
	{
		stuff[x].a = rand() % MAX + 1;
		stuff[x].b = rand() % 26 + 'A';
	}

	return(0);
}

