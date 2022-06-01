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
  Zombie zombies[MAX_ZOMBIES];
} ZombieData;

#endif
