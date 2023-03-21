/**
 * _isalpha - Check if a char is a letter or not
 * @c: is the char to check
 *
 * Return: 1 if is the case and 0 if it's not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
