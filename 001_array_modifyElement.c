#include <stdio.h>

/*

 * 
 * */
 
 int main()
{
		char pet []="kat";
		
		printf("Before : %s\n\n",pet);
		pet[0]='c'; // inlocuiesti elementul 0--adica primul caracter -'k'  cu 'c'
		printf("Before : %s\n\n",pet);
		return(0);
}
