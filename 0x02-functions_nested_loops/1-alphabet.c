#include "main.h"

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
