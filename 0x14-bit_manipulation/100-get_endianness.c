#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
unsigned int num = 0x12345678;
char *ptr = (char *) &num;

if (*ptr == 0x78) /*  least significant byte is stored first */
{
return (1); /* little endian */
}
else
{
return (0); /*  big endian */
}
}
