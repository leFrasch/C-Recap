#include "main.h"

void print_alphabet(void)
{
	char alph;
       	alph = 97;

	while (alph <= 123)
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}

