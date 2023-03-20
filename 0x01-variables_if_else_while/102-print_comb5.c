#include <stdio.h>

/**
 *main - number comb5
 *Description: display combination of two two-digit numbers
 *Return: 0
*/
int main(void)
{
int n1 = 48;
int n2 = 48;
int n3 = 48;
int n4 = 48;
while (n1 <= 57)
{
n2 = 48;
while (n2 <= 57)
{
n3 = 48;
while (n3 <= 57)
{
n4 = 48;
while (n4 <= 57)
{
if (n1 != n3 && n2 != n4)
{
putchar(n1);
putchar(n2);
putchar(' ');
putchar(n3);
putchar(n4);
putchar(',');
putchar(' ');
}
n4++;
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
