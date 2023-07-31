#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_dog - prints the dog struct
  * @d: pointer to the dog struct
  * Return: void.
  */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
