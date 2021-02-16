#include "holberton.h"
/**
 * _puts -
 * @s variable
 *
 */

void _puts(char *str)
{
  while (*str)
    {
      _putchar(*str);
  str++;
}
_putchar(10);
}
