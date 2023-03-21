/**
 * _abs - Find the absolute value of an integer
 * @number: is the integer
 *
 * Return: absvalue (a variable containing the absolute value of
 * number)
 */
int _abs(int number)
{
	int absvalue;

	if (number >= 0)
	{
		absvalue = number;
	}
	else
	{
		absvalue = -1 * number;
	}
	return (absvalue);
}
