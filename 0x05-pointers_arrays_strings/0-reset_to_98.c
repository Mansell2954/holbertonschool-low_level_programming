#include "holberton.h"
/**
 *
 *
 */

void otrovalor(int *m);
int main(){
  int *n = 10;
  printf ("%d", n);
  otrovalor(&n);
  printf ("%d", n);
  return 0;
}
void otrovalor(int *m){
  *m = 15;
}
