#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int ch;

	for (ch = 122 ; ch >= 97 ; ch--)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
