#include "main.h"

/**
 * *rot13 - encode using rot13
 * @str: input string
 * Return: encoded string
 */

char *rot13(char *str)
{
char normalChar[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13Char[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i = 0, j = 0;

while (str[i] != '\0')
{
j = 0;
while (normalChar[j] != '\0')
{
if (str[i] == normalChar[j])
{
str[i] = rot13Char[j];
}
j++;
}
i++;
}
return (str);

}
