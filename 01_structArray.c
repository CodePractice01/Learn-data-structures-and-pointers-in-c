#include <stdio.h>
#include <string.h>

/*
 * */

int main()
{
	//example 2 
		/*struct pixel {
				int horz;
				int vert;
				int color;
				
		}box[4]; */
		
		//pixel structure variable box - example 1
		//struct pixel box[4];
		
		int x;
		
		//example 1&2
		/*box[0].horz = 100;
		box[0].vert =50;
		box[0].color = 'r';
		
		box[1].horz = 100;
		box[1].vert =10;
		box[1].color = 'r';
		
		box[2].horz = 200;
		box[2].vert =100;
		box[2].color = 'r';
		
		box[3].horz = 200;
		box[3].vert =100;
		box[3].color = 'b';*/
		
		
		/*example 3
		 * 
		 * 
		 * */
		
		struct pixel {
				int horz;
				int vert;
				int color;
				
		}box[4] = {
		
				{ 100, 50, 'r'},
				{ 200, 50, 'r'},
				{ 300, 100, 'r'},
				{ 200, 100, 'r'}
		};
		
		
		for(x=0; x<4; x++)
		{
				printf("Pixel %d: %d, %d = %c\n",
					x+1, box[x].horz, box[x].vert, box[x].color);
		}
		
		return(0);
}
