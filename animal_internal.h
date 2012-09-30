#ifndef ANIMAL_INTERNAL_H
#define ANIMAL_INTERNAL_H

#include "animal.h"

typedef const char*(*HowlFunc)();

struct tag_animal
{
    int footCount;
    char name[20];
    HowlFunc howl;
};

struct tag_animal create_animal(const char *name, int footCount, HowlFunc func);

#endif // ANIMAL_INTERNAL_H
