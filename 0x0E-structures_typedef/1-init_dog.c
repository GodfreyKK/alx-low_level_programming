#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct gog
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to the character array representing the dog's name.
 * @age: The age of the dog.
 * @owner: Pointer to the character array representing the owner's name.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
