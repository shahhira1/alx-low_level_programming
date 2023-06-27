#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - progress that generates random valid
 * passwords for the progress 101-crackme
 * Return: Always 0 (success)
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
	sum += c;
	putchar (c);
}
putchar (2272 - sum);
return (0);
}
