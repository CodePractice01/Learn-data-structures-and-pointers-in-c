#include <stdio.h>

/*
 * pass the structuro to a function
 * */


//to pass structure to a function -- make the structure external or global
// define it before call the function

struct pixel {
		int horz;
		int vert;
		char color;	
	};
		
void show_pixel(struct pixel p);
		
int main()
{
		struct pixel center;
		
		center.horz = 320;
		center.vert= 202;
		center.color = 'b'
		
		printf(center.horz );
		//show_pixel(center); //center structure pass to the funcion show_pixel
		
	return(0);
}

void show_pixel( struct pixel p )
{
	printf("Pixel found at %d, %d, color= ",
			p.horz, p.vert);
			
		switch(p.color)
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
			default:
				puts("Invalid");
					
		}
	
}

