#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * This structure is used to store information about a dog,
 * including its name, age, and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_h;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
