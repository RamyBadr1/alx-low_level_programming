#ifndef DOG_H
#define DOG_H

/**
* struct dog - dog struct .
* @name: dog's name .
* @age: dog's age .
* @owner: dog's owner .
* Description: dog struct .
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
