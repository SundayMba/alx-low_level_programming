#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structures dogs properties
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *);
char *_strcpy(char *, char *);
void free_dog(dog_t *d);

#endif
