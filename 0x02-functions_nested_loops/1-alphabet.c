#include "main.h"

/**
 * print_alphabet -  function that prints the alphabet, 
 * in lowecase followed by a new line
 * Return: always 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
