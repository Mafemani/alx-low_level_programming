#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @num: The integer for which the absolute value should be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int num)
{
  if (num < 0)
  {
    return -num;
  }
  else
  {
    return num;
  }
}
