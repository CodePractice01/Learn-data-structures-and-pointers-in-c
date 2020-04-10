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
			
		};
		
		struct person president;
		
		president.birthday.month = 2;
		president.birthday.day = 22;
		president.birthday.year = 1732;
		president.birthday.month = 2;
		president.died.day = 14;
		president.died.month = 12;
		president.died.year = 1799;
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
