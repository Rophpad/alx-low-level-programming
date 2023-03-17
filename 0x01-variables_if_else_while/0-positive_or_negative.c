#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print whether the number stored in the variable n is positive or negative
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	switch (n > 0)
	{
		case (1):
			printf("%d is positive\n", n);
			break;
		case (0):
			switch (n < 0)
			{
				case (1):
					printf("%d is negative\n", n);
					break;
				case (0):
					printf("%d is zero\n", n);
					break;
			}
			break;
	}
	return (0);
}
