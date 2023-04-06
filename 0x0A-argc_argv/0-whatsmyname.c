#include "main.h"

int main(int ac, char **av)
{
	while (*av[0])
	{
		_putchar(*av[0]);
		av[0]++;
	}
	write(1, "\n", 1);
	return (0);
}
