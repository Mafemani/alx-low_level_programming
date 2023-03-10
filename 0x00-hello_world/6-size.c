/**
 * main - Entry point
 *
 * Description: Prints the size of various types using libc6-dev-i386 on the
 * computer it is compiled and run on.
 *
 * Return: Always 0
 */

#include <stdio.h>

int main(void)
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of short: %ld byte(s)\n", sizeof(short));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of long: %ld byte(s)\n", sizeof(long));
	printf("Size of long long: %ld byte(s)\n", sizeof(long long));
 	printf("Size of float: %ld byte(s)\n", sizeof(float));
 	printf("Size of double: %ld byte(s)\n", sizeof(double));
	printf("Size of long double: %ld byte(s)\n", sizeof(long double));

	return (0);
}
