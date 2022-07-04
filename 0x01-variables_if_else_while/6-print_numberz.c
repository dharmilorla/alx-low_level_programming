#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');
return (9);
}
