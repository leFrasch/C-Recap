#include <stdio.h>

int main(void)
{
	/*
	 * The program prints all the numbers of base 16 in lowercase
	 * It also returns 0
	 */

	char i = '0';
	char c = 'a';

	while ( i <= '9' )
	{
		putchar(i);
		i++;
	}

	while ( c <= 'f' )
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return(0);
}
