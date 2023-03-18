#include <stdio.h>
/**
* main - a program to print all first 10 single numbers.
*
* Return:0 (Success)
*/
int main(void)
{
int n = 0;

while (n < 10)
{
putchar(n + '0');
n++;
}

putchar('\n');

return (0);
}
