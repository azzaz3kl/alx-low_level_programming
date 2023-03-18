#include <stdio.h>
/**
* main - a program to print all alphabetic letters except q and e
*
* Return: 0 (Success)
*/

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
putchar(letter);
}
putchar('\n');
return (0);
}
