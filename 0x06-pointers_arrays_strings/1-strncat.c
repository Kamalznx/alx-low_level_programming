#include "main.h"
/**
 * _strncat - a finction that concatenates two strings
 * at most n bytes from src. src does not need to be null terminated
 * @dest: a pointer to destination string
 * @src: a pointer to source string
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, k;
	/* k is a counter for n bytesof src to be concatenated */
	/* length = length of destination string */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (k = 0; k < n && src[k] != '\0'; k++, length++)
	{
		dest[length] = src[k];
	}
	dest[length] = '\0';
	return (dest);
}
