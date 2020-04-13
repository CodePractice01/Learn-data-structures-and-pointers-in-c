/*******
 * 
 *
 * ******/
 #include <stdio.h>


struct date {
		int year;
		int month;
		int day;
	};
struct person {
	char name[32];
	struct date laDomnie;
};

void show(struct person p[])
{
		int x;
		puts("Presidents: ");
		
		for(x=0;x<4;x++)
		{
				printf("%s -la domnie-  %d/%d/%d\n",
					p[x].name,
					p[x].laDomnie.month,
					p[x].laDomnie.day,
					p[x].laDomnie.year
				);
		}
}

int main ()
{
	
	
	struct person presidents[4]={
			{"Nicu ZaBoss", {28 , 03 , 1974} },
			{"Ion Nemuritorul", {26, 12 , 1989} },
			{"Emil Constantinul I", {29 , 11 , 1996} },
			{"Base omulMarii", { 20, 12 , 2004} },
	};
	
	struct person temp;
	
	show(presidents);
	
	/*schimb de loc 2-> 3*/
	
	printf("Swapping..");
	temp =presidents[1];
	presidents[1] = presidents[2];
	presidents[2] =temp;
	
	printf("Show list again");
	show(presidents);	
	


	return (0);
}

