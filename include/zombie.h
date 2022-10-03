#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "definitions.h"

typedef enum ZombieType { ZT_Basic, ZT_Fast, ZT_Boss } ZombieType;

typedef struct Zombie {
  ZombieType type;
  int health;
  int speed;
} Zombie;

typedef struct ZombieData{
  int count;
  int capacity;
  Zombie *zombies;
} ZombieData;

void ZombieData_init(ZombieData *self);
#endif
