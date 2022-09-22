#include "main.h"
/**
 * leet - entry point
 * ONE if, RWO loops only...
 * @n: input
 * Return: Always 0 (success)
 */
char *leet(char *n)
{
	int a, b;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = ('4', '3', '0', '7', '1'};

			for (a = 0; n[a] != 0; a++)
			{
			for (b = 0; b <= 9; b++)
			{
			if (n[a] == find[b])
			{
			n[a] = replace[b / 2];
			b = 9;
			}
			}
			}

			return (n);
}
