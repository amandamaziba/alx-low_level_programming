#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - dog's identity
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 *
 * Description: dog's attributes
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog starcture
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
