#include <stdio.h>

/*
 * 
 * */
 
 int main()
{
		int original[5] = {45,50,88,100,213};
		int duplicate[5];
		int x;
		
		
		for(x=0;x<5;x++)
		{
			//fiecare element din original este atribuit in arrayul duplicate
				duplicate[x]= original[x];
		}
		
		
		puts("\n\nArray values: \n");
		for(x=0;x<5;x++)
		{
			printf("Element #%d  original:%3d == duplicate:%3d \n",x, original[x], duplicate[x]);
		}
		
		return(0);
}
