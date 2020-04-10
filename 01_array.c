#include <stdio.h>

/*
 * an array is a collection of consecutive objects,all of the same data type
 * 
 * an array is a variable
 * 
 * */
 
 int main()
{
		/* example 1
		 float hightscore[5];
		hightscore[0]=993.86;
		hightscore[1]=682.01;
		hightscore[2]=639.60;
		hightscore[3]=310.45;
		hightscore[4]=123.25;*/
		
		/*example 2*/
		
		float hightscore[5]= {993.86, 682.01, 639.60, 310.45,123.25 };
		int x;
		
		
		
		puts("Here are the high scores:");
		
		for(x=0;x<5;x++)
		{
			//%.2f -- display: 0.00
				printf("# %d %.2f\n",x+1,hightscore[x]);
		}
		
		return(0);
}
