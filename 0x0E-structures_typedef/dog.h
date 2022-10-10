#ifndef FUNC
#define FUNC

/**
 * struct dog - a dog data type
 *
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
