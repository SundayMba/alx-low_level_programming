#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/*
*Description: main - entry point
*Return: 0
*/
int main(void)
{
	int n;
	char n_str[12];
	int i;
	int strLength;
	int lastElement;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
  	/*convert the int to string*/
  	sprintf(n_str, "%d", n);
 	/*get string length*/
  	strLength = strlen(n_str);
  	/*Get last element and convert it to ascii int represention: 3 (char) -> 51 (int)*/
  	lastElement = n_str[strLength - 1];
  	/*implement logic*/
  	if (n > 0)
  	{
    		/*53, 54 and 48 is the integer rep. of char. 5, 6 and 0 in ascii*/
    		if (lastElement > 53)
     	 		printf("Last digit of %d is %c and is greater than 5\n", n, lastElement);
    		else if (lastElement < 54 && lastElement != 48)
      			printf("Last digit of %d is %c and is less than 6 and not 0\n", n, lastElement);
    		else 
      			printf("Last digit of %d is %c and is 0\n", n, lastElement);
  	}
  	else if (n < 0)
  	{
    		if (lastElement == 48)
      			printf("Last digit of %d is %c and is 0\n", n, lastElement);
 	 	else 
      			printf("Last digit of %d is -%c and is less than 6 and not 0\n", n, lastElement);
  	}
  	else
    		printf("Last digit of %d is %c and is 0\n", n, lastElement);
	return (0);
}
