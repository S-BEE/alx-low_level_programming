#include <stdio.h>
/**
 * main - entry point
 * Description: prints alphabets in lower and upper case
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <='Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
