#ifndef _1_DOGY_H_
#define _1_DOGY_H_
/**
 *struct dog - is dog
 *@name: is a name of dog.
 *@age: is a age of dog.
 *@owner: is name of owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*_1_DOGY_H_*/
