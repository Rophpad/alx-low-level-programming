/**
 * _islower - check if a letter is lowercase
 * @c: is the letter to check
 *
 * Return: 1 if c is lowercase, 0 if it's not the case
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
