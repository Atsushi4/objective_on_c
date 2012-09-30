#ifndef BIRD_H
#define BIRD_H

#include "animal.h"

typedef struct tag_bird *Bird;
Bird create_bird(); // inherits Animal
int canFly(Bird bird);

#endif // BIRD_H
