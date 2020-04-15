#include <stdio.h>

int main()
{
		char input[10];
		
		printf("Your name?");
		
		//scanf -- la primul space, nu mai citi restul de caractere
		//ptr a limita nr de charactere 'retinut' : in exemplu de fata %9s -->9 caractere
		scanf("%9s",input);
		
		printf("Pleased to meet you, %s\n",input);
		
		return (0);
}
