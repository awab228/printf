#include "main.h"

/**
 * printf_char - Prints a character.
 * @val: Argument containing the character to print.
 *
 * Return: Number of characters printed (always 1).
 */
int printf_char(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);
}
