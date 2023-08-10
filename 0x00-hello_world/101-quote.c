#include <unistd.h>

/**
 * main - Entry point
 * Description: program to print without puts or printf
 * Return: Always 1 (not success)
 */

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, s, 59);
	return (1);
}
