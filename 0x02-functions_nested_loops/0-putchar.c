#include <unistd.h>
/**
* main - entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char c = '_';

	write(STDOUT_FILENO, &c, 1);
	c = 'p';
	write(STDOUT_FILENO, &c, 1);
	c = 'u';
	write(STDOUT_FILENO, &c, 1);
	c = 't';
	write(STDOUT_FILENO, &c, 1);
	c = 'c';
	write(STDOUT_FILENO, &c, 1);
	c = 'h';
	write(STDOUT_FILENO, &c, 1);
	c = 'a';
	write(STDOUT_FILENO, &c, 1);
	c = 'r\n';
 	write(STDOUT_FILENO, &c, 1);
	return (0);
}