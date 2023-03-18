#include <stdio.h>
/**
* main - a program to prints all the numbers of base 16 in lowercase.
*
* Return:0 (Success)
*/
int main(void)
{
int n = 0;
char letter;

while (n < 10)
{
putchar(n + '0');
n++;
}

for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);

putchar('\n');

return (0);
}
