#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits  convert one number to another number
 * @n: first number
 * @m: second number to convert 
 * Return: number of bits that  needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
