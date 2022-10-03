#ifndef GAME_H
#define GAME_H
#include "map.h"
#include "zombie.h"
#include <raylib.h>

Vector2 Vector2_new(double x, double y);

typedef struct PlayerData {
  Vector2 pos;
} PlayerData;

// allocated first with malloc, takes new things by value
void PlayerData_init(PlayerData *data, Vector2 pos);
// destructor function
void PlayerData_destroy(PlayerData *data);
// only changes the player position
void PlayerData_update_pos(PlayerData *data, Vector2 pos);

// update game state by one frame
void run_frame(const ZombieData *zombies, int zombie_count, PlayerData *player);
#endif
