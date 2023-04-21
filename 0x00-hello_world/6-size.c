#include <stdio.h>
/**
 * main - the fuction will print a sizes of different data types
 *
 * Return: 0
*/
int main(void)
{
float a;
char b;
int c;
long int d;
long long int e;
printf("the size of char: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("the size of int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("the size of long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("the size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(e));
printf("the size of float: %lu bytes(s)\n", (unsigned long)sizeof(a));
return (0);
}
