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
			char name[32];
		};
		
		struct person president;
		
		president.birthday.month = 2;
		president.birthday.day = 22;
		president.birthday.year = 1980;
		strcpy(president.name, "Abu Dhabi");
		
		printf("%s was bord on %d/%d/%d",
					president.name,
					president.birthday.day,
					president.birthday.month,
					president.birthday.year);
		
		return(0);
}
