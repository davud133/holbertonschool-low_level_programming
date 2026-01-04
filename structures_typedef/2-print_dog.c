#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - it prints dog's properties
 * @dog: dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d.name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s", d.name);
	if (d.age == NULL)
		printf("(nil)");
	else
		printf("Age: %d", d.age);
	if (d.owner == NULL)
		printf("(nil)");
	else
		printf("Owner: %s", d.owner);
}
