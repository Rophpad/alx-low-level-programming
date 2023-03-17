#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * getlastdigit - Gets the last digit of a number 
 *
 * @n is a random number
 *
 * Return: the last digit of the number
 */
int getlastdigit(int n)
{
	int lastdigit = n % 10;

	return (lastdigit);
}

/**
 * ctd - Prints a strings following some conditions
 *
 * @lastdigit is the return of the function getlastdigit
 *
 * Return: a string
 */
void cdt(int lastdigit)
{
	if (lastdigit > 5)
        	printf("and is greater than 5\n");
	else if (lastdigit != 0 && lastdigit < 6)
                printf("and is less than 6 and not 0\n");
	else
        	printf("and is 0\n");
}

/**
 * main - Prints a text after poccessing functions:
 * getlastdigit and ctd
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	int n;
	int lastdigit;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	lastdigit = getlastdigit(n);
        printf("Last digit of %d is %d ", n, lastdigit);
	cdt(lastdigit);
        return (0);
}
