#include <stdio.h>


/*
 * 
 * //union are unsafe
	//union space isn't restricted to a specific data type --it's just an unholy chenck of memory
	//the compiler doesn't check to ensure that the proper date type is used
	// - modify one member of a union affects other memebers
	* 
 * */
int main()
{
	
	
	// char a and int b--share the same storage space
		union storage {
				char a;
				int b;
		} reg;
		
		reg.a = 'A';
		printf("reg.a stores %c\n", reg.a); // output A
		
		reg.b=1346;
		printf("reg.b stores %d\n",reg.b);// output 1346
		printf("reg.a stores %c\n", reg.a);// output B
		
		return(0);
	
}
