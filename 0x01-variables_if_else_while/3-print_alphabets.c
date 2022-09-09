#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char num1 = 'a';
	char num2 = 'A';

	for (num1 = 'a'; num1 <= 'z'; num1++)
		putchar(num1);
	for (num2 = 'A'; num2 <= 'Z'; num2++)
		putchar(num2);

	putchar('\n');

	return (0);
}
