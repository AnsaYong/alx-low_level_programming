#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new structure for dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: The new structure for dog contains 3 elements
 * which tell us its name, age and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
