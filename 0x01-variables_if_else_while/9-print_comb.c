#include <stdio.h>
/**
* main - a program to prints all possible combinations of single-digit numbers.
*
* Return:0 (Success)
*/

int main(void)
{

int i;

for (i = '0'; i <= '9' ; i++)
{
putchar(i);

if (i != '9')
{
putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
