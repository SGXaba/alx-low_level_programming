#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int e = 0;
	long p;

	if (argc < 3)
	{
		printf("Error\n");
		e = 1;
	}
	else
	{
		p = atol(argv[1]) * atol(argv[2]);
		printf("%ld\n", p);
	}
	return (e);
}
