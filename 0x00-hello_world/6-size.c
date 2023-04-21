#include <stdio.h>
/**
 * main - the fuction will print a sizes of different data types
 *
 * Return: 0
*/
int main(void)
{
	float fSize;
	char cSize;
	int iSize;
	long int liSize;
	long long int lliSize;
printf("the size of char: %lu bytes(s)\n", (unsigned long)sizeof(cSize));
printf("the size of int: %lu bytes(s)\n", (unsigned long)sizeof(iSize));
printf("the size of long int: %lu bytes(s)\n", (unsigned long)sizeof(liSize));
printf("the size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(lliSize));
printf("the size of float: %lu bytes(s)\n", (unsigned long)sizeof(fSize));
return (0);
}
