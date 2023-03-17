#include <stdio.h>
/**
* main - a program to print all alphabet letters.
* Return: 0 (Success)
*/

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; ++letter)
{
putchar(letter);
}

putchar('\n');

return (0);
}
