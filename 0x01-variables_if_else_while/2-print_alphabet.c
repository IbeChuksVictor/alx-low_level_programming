#include <stdio.h>
/**
 * main - prints the entire alp[habet in lower case and new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)

		putchar(l);
	putchar('\n');
	return (0);
}
