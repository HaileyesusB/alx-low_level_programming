#include "main.h"
/**
 * swap_int - swap two integers a and b
 *
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
  int c = 0;
  c = *a;
  *a = *b;
  *b = c;
}
