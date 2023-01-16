/**
 * _abs - absolute value of a number
 * @x: integer input
 * Return: absolute value of x
 */
int _abs(int x)
{
	if (x > 0)
		return (x);
	else if (x == 0)
		return (0);
	else
		return (-x);
}
