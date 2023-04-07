#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int i;
unsigned long int mask = (1ul << 63); /* 1ul is (unsigned long) 1 */
for (i = 0; i < 64; i++)
{
if ((n & mask) != 0) /* check if bit is set */
{
putchar('1');
}
else if (i != 0) /* only print 0 if we've already printed a 1 */
{
putchar('0');
}
mask = (mask >> 1); /* shift mask to next bit */
}
if (n == 0) /* special case for n = 0 */
{
putchar('0');
}
}

