#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: ALways 0 (Success)
  */
int main(void)
{
	char num1 = 'a';

	for (num1 = 'a'; num1 <= 'z';)
	{
		if (num1 == 'q')
		{
			num1++;
		}
		else if (num1 == 'e')
		{
			num1++;
		}
		else
		{
			putchar(num1);
			num1++;
		}
	}
	putchar('\n');

	return (0);
}
