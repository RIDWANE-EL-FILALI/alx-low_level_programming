#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
