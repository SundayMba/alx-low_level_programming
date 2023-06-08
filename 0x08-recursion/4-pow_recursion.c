/**
 * _pow_recursion - calculate power of a number using recursion
 * @x: base number
 * @y: power
 * Return: power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
