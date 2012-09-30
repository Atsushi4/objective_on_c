#include <stdlib.h>
#include "dog.h"
#include "animal_internal.h"

static const char *howl_dog()
{
    return "Bow!";
}

Animal create_dog()
{
    Animal animal = (Animal)malloc(sizeof(struct tag_animal));
    *animal = create_animal("dog", 4, howl_dog);
    return animal;
}
