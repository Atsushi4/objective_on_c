#ifndef ANIMAL_H
#define ANIMAL_H

typedef struct tag_animal *Animal;

const char *name(const Animal animal);
int foot_count(const Animal animal);
const char *howl(const Animal animal);

#endif // ANIMAL_H
