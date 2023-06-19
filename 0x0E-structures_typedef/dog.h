#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure data
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void print_dog(struct dog *d);
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *);
void free_dog(dog_t *d);

#endif
