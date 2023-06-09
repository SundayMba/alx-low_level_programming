#include <unistd.h>  /*unix system header file*/

int _putchar(char c)
{
	/*STD_OUT == 1 FILE INDICATOR*/
	return (write(1, &c, 1));
}
