#include "main.h"
/**
 * _strlen - Write a function that returns the length of a string
 * @s: pointer to the string
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
