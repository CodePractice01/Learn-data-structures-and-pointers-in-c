#include <stdio.h>

int main()
{
		//char tictactoe[3][3][3]; //ex1
		char tictactoe[9];
		int x,y,z;
		
		//initialize
		for(x=0;x<3;x++)
			for(y=0;y<3;y++)	
				for(z=0;z<3;z++)
					//tictactoe[x][y][z]='*'; //ex1
					tictactoe[x+y+z]='*';
		
		//display
		puts("tic tac toe");
		for(x=0;x<3;x++)
		{
			printf("%*c",x+1,' ');
			for(y=0;y<3;y++)
			{
				for(z=0;z<3;z++)
				{
					//printf("%c",tictactoe[x][y][z]); //ex1
					printf("%c",tictactoe[x+y+z]);
				}
				printf("   "); //space
			}
			
			putchar('\n');
		}	
		return(0);
	
}

