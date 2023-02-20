#include <stdio.h>
/**
*Author: Betty
*Date: 2023-02-20
*This program prints the lowercase alphabet in reverse, followed by a new line.
*Only the putchar function is used.
*/
int main(void) 
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return 0;

}
