#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: member 1 dogs name
 * @age: member 2 dogs age
 * @owner: member 3 owner name
 *
 * Description: defines a new data type that
 *              can be used to represent dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
