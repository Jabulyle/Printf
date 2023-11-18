#include "main.h"
/**
 * lyel_putchar - print a character
 * @c: char input
 * Return: 1
 */
int lyle_putchar(char c)
{
	return(write(1, &c, 1));

}
