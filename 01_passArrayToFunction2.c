#include <stdio.h>

/*
 * 
 * */
 
 //char array[] - tot sirul de caractere din array este 'trimis' si prelucrat in cadrul functiei
 void incshow(char array[])
{ 
	int x;
	
	
	for(x=0;x<6;x++)
	{
		array[x]++;
		putchar(array[x]);
	}
}

 int main()
{
		char text[] = "Gdkkn ";
		incshow(text);
		
		putchar('\n');
		
		puts(text);
		
		return(0);
}
