#include "main.h"
#include <string.h>

/**
 * _strlen - finds the length of a string
 * @s: string
 * Return: integer
 */

int _strlen(char *s)
{

int c;

for (c = 0; s[c] != 0; c++);

	return (c);
}

/**
 * _strlenc _ finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int print_s(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char*);
	if (s ==NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			lyle_putchar(s[i]);
		return (len);
	}
	else
	{
	len = strlen(s);
for (i = 0; i < len; i++;)
lyle_putchar(s[i]);
return (len);
	}
}
