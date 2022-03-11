#include <stdio.h>
/**
 * main - prints all single digit of number base 10 starting from 0, then a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 0; l <= 9; l++)
		printf("%d", l);
	printf("\n");
	return(0);
}
