#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
init_dog(&my_dog, "Poppy", 3.5, "Bob");

#endif /* DOG_H */
