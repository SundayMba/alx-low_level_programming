#include "main.h"
/**
 * rev_string - print string in reverse
 * @str: string to print
 * Return: void
 */
void rev_string(char *str)
{
	int temp, count = 0, i, end;
	char *ptr;

	for (ptr = str; *ptr != '\0'; ptr++)
		count++;
	end = count - 1;
	for (i = 0; i < (count / 2); i++)
	{
		temp = *(str + i);
		*(str + i) = *(str + end);
		*(str + end) = temp;
		end--;
	}
}
