#include "main.h"

/**
 * main - prints the word _putchar
 *
 * Return: 0 on success execution.
 */

int main(void)
{
	int i = 0;
	char s[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

	return (0);
}
