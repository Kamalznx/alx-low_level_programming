#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: ALways 0 (Success)
  */
int main(void)
{
	char num1 = 'z';

	for (num1 = 'z'; num1 >= 'a'; num1--)
		putchar(num1);

	putchar('\n');

	return (0);
}
