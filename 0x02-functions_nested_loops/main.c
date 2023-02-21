#include "main.h"
/**
 * main - entry point
 * Return: (0) success
 */
int main(void)
{
	//print_alphabet();
	//print_alphabet_x10();
	int r;

	r = _isalpha('a');
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
