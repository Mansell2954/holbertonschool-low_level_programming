#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0
 */
int _isupper(int c)
{
  if (c >= 'a' && c <= 'z')
    {
      return (0);
    }
  else if (c  >= 'A' && c <= 'Z')
    {
      return (1);
    }
  return (0);
}
