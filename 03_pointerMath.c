#include <stdio.h>


int main()
{
	int alpha;

	int *pa;
	
	pa =&alpha;
	printf("%p\n",pa);
	printf("%p\n",pa+1); // adaugat 1 se va incrementa adresa cu 4bites

	return(0);
}

