#include <stdio.h>

/*
 * 
 * */
 
 int main()
{
		int numbers[] = {45,50,88,100,213};
		int temp,x;
		
		puts("Before:");
		for(x=0;x<5;x++)
		{
				printf("%d\n",numbers[x]);
		}
		//outpu: 45,50,88,100,213
		
		
		temp =  numbers[3]; // val 100
		numbers[3] = numbers[2]; //val 88
		numbers[2]=temp; //val 100
		
		puts("\n\nAfter: \n");
		for(x=0;x<5;x++)
		{
				printf("%d\n",numbers[x]);
		}
		 //45,50,100, 88 ,213
		return(0);
}
