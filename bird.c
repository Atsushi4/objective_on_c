#include <stdlib.h>
#include "bird.h"
#include "animal_internal.h"

struct tag_bird
{
    struct tag_animal base;
    int canFly;
};

static const char *howl_bird()
{
    return "Crow!";
}

Bird create_bird()
{
    Bird bird = (Bird)malloc(sizeof(struct tag_bird));
    bird->base = create_animal("bird", 2, howl_bird);
    return bird;
}

int canFly(Bird bird)
{
    return bird->canFly;
}
