#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 *
 */

void print_alphabet_x10(void)
{
	int ch;
	int x10;

	for (x10 = '1' ; x10 = '10' ; x10++)
	{
		for (ch = 97 ; ch <= 122 ; ch++)
		{
			_putchar(ch);
		}
	}
	
	_putchar(10);
}
