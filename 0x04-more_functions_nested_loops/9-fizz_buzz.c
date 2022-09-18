#include <stdio.h>

/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*Retirn: returns 0
*/

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf('fizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf('Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				print("Buzz ");
			}
			else
