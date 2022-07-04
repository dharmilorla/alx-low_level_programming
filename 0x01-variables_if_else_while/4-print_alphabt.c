#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Alphabets
 * Return: Always 0
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z') 
{
if (letter == 'e')
{
letter++;
}
else if (letter == 'q')
{
letter++;
}
else
{
putchar(letter);
letter++;
}
}
putchar('\n');
return (0);
}
