#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char num1 = 'a';

	for (num1 = 'a'; num1 <= 'z'; num1++)
		putchar(num1);

	putchar('\n');

	return (0);
}
