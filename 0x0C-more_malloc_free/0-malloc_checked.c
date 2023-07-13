#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: int
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
