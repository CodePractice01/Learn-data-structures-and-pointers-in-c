#include <stdio.h>

/*

 * 
 * */
 
 int main()
{
		float hightscore[5];

		int x;
		
		
		
		for(x=0;x<5;x++)
		{
			
			printf("High score #%d ",x+1);
			scanf("%f", &hightscore[x]); //get values 
		}
		
		puts("Here are the high scores: ");
		
		for(x=0;x<5;x++)
		{
			printf("#%d %.2f \n",x+1,hightscore[x]);
		}
		return(0);
}
