#include "main.h"

/**
 * print_c - imprime un char
 * @val: argumentos variables, por eso variable funcion
 * Return: int, porque los chars son ints pero limitados a 1byte
 */

int print_c(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
