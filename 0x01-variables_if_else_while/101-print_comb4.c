#include <stdio.h>

/**
 * main - print combination
 * Description: display all possible combination for twi digit number
 * Return: 0
 */
int main(void)
{
int n1 = 48;
int n2 = 48;
int n3 = 48;
while (n1 <= 57)
{
n2 = 48;
while (n2 <= 57)
{
n3 = 48;
while (n3 <= 57)
{
if (n1 != n2 && n2 != n3 && n1 < n2 && n2 < n3)
{
putchar(n1);
putchar(n2);
putchar(n3);
if (n1 != 55 || n2 != 56 || n3 != 57)
{
putchar(',');
putchar(' ');
}
}
n3++;
}
n2++;
}
n1++;
}
putchar('\n');
return (0);
}

