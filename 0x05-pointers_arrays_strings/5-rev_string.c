#include "main.h"
#include <string.h>
/**
 * rev_string - reverse the string
 * @s: pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k, tar;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		tar = s[k];
		s[k] = s[j];
		s[j] = tar;
		k++;
		j--;
	}
{
