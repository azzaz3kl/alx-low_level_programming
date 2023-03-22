#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence.
 *
 * Return: 0 (Success)
 */

int main(void)
{
unsigned long num1 = 0, num2 = 1, sum;
float Total;

while (1)
{
sum = num1 + num2;
if (sum > 4000000)
break;

if ((sum % 2) == 0)
Total += sum;

num1 = num2;
num2 = sum;
}
printf("%.0f\n", Total);

return (0);
}
