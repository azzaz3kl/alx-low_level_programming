#include <stdio.h>
/**
* main - a program to prints all possible combinations of single-digit numbers.
*
* Return:0 (Success)
*/

int main(void)
{

int n;

for (n = '0'; n <= '9' ; n++)
{
putchar(n);

if (n != '9')
{
putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
