#include <stdlib.h>
#include "cat.h"
#include "animal_internal.h"

static const char *howl_cat()
{
    return "Meow!";
}

Animal create_cat()
{
    Animal animal = (Animal)malloc(sizeof(struct tag_animal));
    *animal = create_animal("cat", 4, howl_cat);
    return animal;
}
