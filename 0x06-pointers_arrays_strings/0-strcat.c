#include "holberton.h"
#include <stdio.h>

/**
 *
 *
 *
 */
int main(void)
{
  char a[20] = "Hello ";
  char b[20] = "World!\n";
  _strcat(a, b);
  printf("%s", a);
  printf("%s", b);
  printf("\n");

  return 0;
}
