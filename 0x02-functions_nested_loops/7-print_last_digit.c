/**
 * print_last_digit - print the last digit of a number
 * @number: is the number
 *
 * Return: the result stored in lastdigit
 */
int print_last_digit(int number)
{
	int lastdigit = number % 10;
	if (number < 0)
		lastdigit = -1 * lastdigit;
	return (lastdigit);
}
