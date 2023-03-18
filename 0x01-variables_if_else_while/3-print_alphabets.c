#include <stdio.h>
/**
* main - a program to print small and capital letters.
* Return: 0 (Success)
*/

int main(void)
{
char letter;
char letA;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

for (letA = 'A'; letA <= 'Z'; letA++)
{
putchar(letA);
}
putchar('\n');

return (0);
}
