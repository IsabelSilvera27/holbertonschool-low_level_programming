#include "main.h"
#include <stdio.h>
/**
 * print_rev - Write a function that prints a string in reverse
 * @s: pointer to the string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}
