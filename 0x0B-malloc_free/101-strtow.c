#include <stdlib.h>
#include "main.h"

int word_len(char *str);
int count_words(char *str);

/**
 * word_len - last index in the string locator
 * @str: string to be searched
 * Return: last index of word
 */

int word_len(char *str)
{
	int index = 0, length = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		length++;
		index++;
	}
	return (length);
}

/**
 * count_words - counts total words
 * @str: string
 * Return: number of words
 */

int count_words(char *str)
{
	int index = 0, words = 0, length = 0;

	for (index = 0; *(str + index); index++)
		length++;
	for (index = 0; index < length; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * strtow - splits string into words
 * @str: string
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	char **string;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	string = malloc(sizeof(char *) * (words + 1));
	if (string == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
		string(w) = malloc(sizeof(char) * (letters + 1));
		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(string[w]);
			free(string);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			string[w][l] = str[index++];
		string[w][l] = '\0';
	}
	string[w] = NULL;
	return (string);
}
