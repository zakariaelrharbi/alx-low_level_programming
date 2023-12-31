#ifndef MYFILE_H
#define MYFILE_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - has 3 elements.
 * @name: 1st element.
 * @age: 2nd element.
 * @owner: 3rd element.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
* dog_t - typedef struct dog
*/
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
