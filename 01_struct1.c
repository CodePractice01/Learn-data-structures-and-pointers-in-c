#include <stdio.h>
/*
 * 
 * a structure is a container for multiple variable types
 * -a variable of the structure type must be declared
 * To acces structure members, use the structure variable name, a dot,  and the member name : birthay.month
 * 

 * */

int main()
{
		struct pixel {
				int horz;
				int vert;
				char color;
				
		} center;
		
		//struct pixel center; //exemplu 1
		
		center.horz = 320;
		center.vert = 240;
		center.color = 'r';
		
		printf("The pixel at %d %d  is colored > ", center.horz, center.vert);
		
		switch (center.color)
		{
			case 'r':
				puts("red");
				break;
			case 'g':
				puts("green");
				break;
			case 'b':
				puts("blue");
				break;
		}
			
		return(0);
}
