#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - writes 00 - 99
 * Description: write unique combination
 * Return: 0 on success
 */
int main(void)
{
int i, j;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
if ((i < j) & (j <= '0'))
{
putchar(i);
putchar(j);
if ((j < '9') | (i < '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
