#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
int num = 0;
while (num <= 9)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (9);
}
