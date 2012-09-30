#include <stdio.h>

#include "dog.h"
#include "cat.h"
#include "bird.h"

int main(void)
{
    int i;
    Animal animals[3];
    animals[0] = create_dog();
    animals[1] = create_cat();
    animals[2] = (Animal)create_bird();

    for (i = 0; i < 3; ++i)
    {
        Animal target = animals[i];
        puts("------------------------------");
        printf("name : %s\nfoot count : %d\nhowl : %s\n", name(target), foot_count(target), howl(target));
        if (i == 2)
            printf("I can%s fly!\n", canFly((Bird)target) ? "" : "not");

        puts("------------------------------");
    }

    return 0;
}

