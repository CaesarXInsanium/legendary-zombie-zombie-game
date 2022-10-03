#include "zombie.h"
#include "definitions.h"
#include <stdlib.h>

void ZombieData_init(ZombieData *self) {
  self->count = 0;
  self->capacity = MAX_ZOMBIES;
  self->zombies = (Zombie *)malloc(sizeof(Zombie) * MAX_ZOMBIES);
}
