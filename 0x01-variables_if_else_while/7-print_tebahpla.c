#include <stdio.h>
/**
* main - a program to print all alphabetic letters in a reverse.
*
* Return: 0 (Success)
*/
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');

return (0);
}
