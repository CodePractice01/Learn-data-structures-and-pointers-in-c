#include <stdio.h>
#include <string.h>

/*
 * assignment struct 

 * */

int main()
{
		struct date {
				int month;
				int day;
				int year;
				
		}; 
		
		struct person {
			struct date birthday;
			struct date died;
			char name[32];	
		} president = {
			{2, 22, 1732},
			{12, 14, 1799},
			
			};
		
		strcpy(president.name, "G. Washington");
		
		printf("%s was bord on %d/%d/%d and died on %d/%d/%d",
					president.name,
					president.birthday.day,
					president.birthday.month,
					president.birthday.year,
					president.died.day,
					president.died.month,
					president.died.year);
		
		return(0);
}
