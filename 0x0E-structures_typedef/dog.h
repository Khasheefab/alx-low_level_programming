#ifndef DOG_H
#define DOG_H

/**
 * struct -> Struct dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 * Description: This struct is for DOG
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
dog_t *ne_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/

