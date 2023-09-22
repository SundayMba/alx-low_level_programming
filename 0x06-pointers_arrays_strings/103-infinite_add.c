#include "main.h"
#include <string.h>


/**
 * infinite_add - add an infinite sum of a number
 * @n1: number one
 * @n2: number 2
 * @r: buffer to store the answer
 * @size_r: size of the buffer
 * Return: pointer to r buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int whole_num, remainder, num1, num2, num;
	int len_n1, len_n2, i;

	len_n1 = strlen(n1);
	len_n2 = strlen(n2);
	whole_num = 0;
	num = 0;
	/* assign NULL at the end of the buffer */
	r[size_r - 1] = '\0';
	/* move to the ends of the buffers to start addition  */
	while (*n1)
		n1++;
	while (*n2)
		n2++;
	n1--;
	n2--;
	for (i = size_r - 2; len_n1 > 0 || len_n2 > 0; i--)
	{
		num1 = *n1 ? ((*n1--) - '0') : 0;
		num2 = *n2 ? ((*n2--) - '0') : 0;
		whole_num = (num1 + num2 + num) / 10;
		remainder = (num1 + num2 + num) % 10;
		if (i < 0)
			return (0);
		r[i] = remainder + '0';
		len_n1--;
		len_n2--;
		num = whole_num;
	}
	if (i < 0)
		return (0);
	r[i] = whole_num + '0';
	return (&r[i]);
}

