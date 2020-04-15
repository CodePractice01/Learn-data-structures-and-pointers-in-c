#include <stdio.h>

/*pointer is a variable that holds a memory location of another variable from code
 * 
 * can manipulate the data stored at the address it holds
 * */

int main()
{
	int alpha;

	int *ptr;
	
	alpha = 99;
	printf("Integer variable alpha holds the value %d\n",alpha);
	printf("Variable alpha occupies %lu bytes of storage\n",sizeof(alpha));
	printf("And it sits at address %p\n\n",&alpha);

	ptr = &alpha;
	printf ("The address of variable alpha is %p\n", &alpha);
	printf("The value stored in pointer ptr is %p\n\n",ptr );
	
	printf ("The content of variable alpha  %d \n",alpha);
	printf ("The content of memory address %p is %d \n",ptr,*ptr);
	return(0);
}

