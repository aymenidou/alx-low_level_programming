#include "main.h"

/**
 * _strlen - string length
 * @s: input string
 * Return: string length
 */
int _strlen(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}
/**
 * checker - check if s is palindrome
 * @s: input string
 * @i: start index
 * @j: end index
 * Return: 1 if palindrome 0 if not
 */
int checker(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
		{
			return (1);
		}
		else
		{
			return (pal_checker(s, i + 1, j - 1));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - entry point
 * @s: input char
 * Return: 1 if true 0 if false
 */

int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
