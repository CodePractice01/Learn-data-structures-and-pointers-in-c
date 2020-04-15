#include <stdio.h>

/*
 * compiler treats the array like a pointer, it holds an address, the start of the array
 * */
int main()
{
	int text[10];
	int *pt;

	pt = text;
	printf("Address of text = %p\n",text);
	printf("Address of pt = %p\n",pt);

	return(0);
}

