#include <stdio.h>

/*
 * 
 * */
 
 void incshow(char a)
{ 
	a++;
	//G+1 = H
	//d+1= e
	//k+1 =l
	//k+1=l;
	//n+1=o;
	// space = !
	putchar(a);
	//resul Hello!
}

 int main()
{
		char text[] = "Gdkkn ";
		
		int x;
		
		for(x=0;x<6;x++)
		{
			incshow(text[x]);
		}
		printf("\n");
		
		return(0);
}
