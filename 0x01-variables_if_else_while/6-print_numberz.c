#include <stdio.h>
/**
 * main - Entry point .
 * Description: 'print numbers of base 10 starting with 0'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
