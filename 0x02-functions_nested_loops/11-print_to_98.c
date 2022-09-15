#include "main.h"
#include "6-abs.c"
#include <stdio.h>

/**
 * main - main function
 *
 * print_to_98 - prints natural numbers 0 to 98
 * 
 * n - is a variable
 *
 * Return nothing (void)
*/
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
