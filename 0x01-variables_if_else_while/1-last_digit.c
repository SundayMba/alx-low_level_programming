#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * Description: main - entry point
 * Return: (0)
 */
int main(void)
{
	int n;
	char n_str[12];
	int strLength;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	sprintf(n_str, "%d", n);
	/*get string length*/
	strLength = strlen(n_str);
	/*acii represention: 3 (char) -> 51 (int)*/
	ld = n_str[strLength - 1];
	/*implement logic*/
	if (n > 0)
	{
		/*53, 54 and 48 is the integer rep. of char. 5, 6 and 0 in ascii*/
		if (ld > 53)
			printf("Last digit of %d is %c and is greater than 5\n", n, ld);
		else if (ld < 54 && ld != 48)
			printf("Last digit of %d is %c and is less than 6 and not 0\n", n, ld);
		else
			printf("Last digit of %d is %c and is 0\n", n, ld);
	}
	else if (n < 0)
	{
		if (ld == 48)
			printf("Last digit of %d is %c and is 0\n", n, ld);
		else
			printf("Last digit of %d is -%c and is less than 6 and not 0\n", n, ld);
	}
	else
		printf("Last digit of %d is %c and is 0\n", n, ld);
	return (0);
}
