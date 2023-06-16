#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabets in lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
