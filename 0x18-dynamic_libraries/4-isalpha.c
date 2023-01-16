/**
 *  _isalpha - checks for an alphabet
 *  @c: single input character
 *  Return: 1 if alphabet 0 otherwise
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
