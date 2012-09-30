#include <string.h>
#include "animal.h"
#include "animal_internal.h"

int foot_count(const Animal animal)
{
    return animal->footCount;
}

const char *name(const Animal animal)
{
    return animal->name;
}

const char *howl(const Animal animal)
{
    return animal->howl();
}

struct tag_animal create_animal(const char *name, int footCount, HowlFunc func)
{
    struct tag_animal animal = {footCount, {0}, func};
    strcpy(animal.name, name);
    return animal;
}
