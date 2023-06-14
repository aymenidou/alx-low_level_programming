#include <stdlib.h>
/**
 * wordscount - function to count string words
 * @str: input string
 * Return: words count
 */

int wordscount(char *str)
{
	int wordscpt =	0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
			}
			wordscpt++;
		}
	}
	return (wordscpt);

}

/**
 * **strtow - entry point
 * @str: input string
 * Return: split string
 */

char **strtow(char *str)
{
	int wordlen, i, j, space = 0, letters, k;
	char **array;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wordlen = wordscount(str);
	array = malloc(sizeof(char *) * (wordlen + 1));
	if (wordlen == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < wordlen; i++)
	{
		letters = 0;
		for (j = space; str[j] != '\0'; j++)
		{
			if (str[j] == ' ')
				/** calculate spaces */
				space++;
			else
				letters++;
			if (str[j] != ' ' && (str[j + 1] == ' ' || str[j + 1] == '\0'))
			{
				/** end of a word */
				array[i] = malloc((j - space + 2) * sizeof(char));
				/** allocate memory for the word */
				for (k = 0; k < letters; k++)
				{
					array[i][k] = str[j - letters + 1 + k];
				}
				space += letters;
				break;
			}
		}
	}
	return (array);
}
