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

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(a));
return (0);
}
