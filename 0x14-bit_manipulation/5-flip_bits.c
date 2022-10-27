#include "main.h"

/**
 * flip_bits -> Count number of bits need to be
 * flipped to get from one to another
 * @n: Number
 * @m: Number to flip too
 *
 * Return: Necessary number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}

