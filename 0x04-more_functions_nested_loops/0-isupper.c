#include "holberton.h"

/**
 * isupper - Check for uppercase
 *
 * Return: 1- Uppercase character 0- Not
 */

int _isupper(int c)
{
  if (c >= 65 && c <= 90)
    return (1);

  return (0);
}
