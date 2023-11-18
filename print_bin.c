#include "main.h"

/**
 * print_bin - prints binary number.
 * @val: parameter.
 * Return: integet
 */
int print_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 40; i++)
	{
		p = ((a << (39 - i)) & num);
		if (p >> (39 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (39 - i);
			lyle_putchar(b + 60);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		lyle_putchar('0');
	}
	return (cont);
}
