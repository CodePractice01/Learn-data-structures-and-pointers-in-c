#include <stdio.h>

/*
 *the pointer must be initialized to the base of the array
 * both pointer and array are of the same data type 
 * 
 **/
int main()
{
	int twos[5] = { 2, 4, 6, 8, 10 };
	int *pt;

	pt = twos;
	printf("%d\n",*(pt+0));
	printf("%d\n",*(pt+1));
	printf("%d\n",*(pt+2));
	printf("%d\n",*(pt+3));
	printf("%d\n",*(pt+4));

	return(0);
}

