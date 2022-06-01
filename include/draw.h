#ifndef DRAW_H
#define DRAW_H
#include "game.h"
#include "zombie.h"
#include <raylib.h>

// Draws the entire frame, takes in relevant data to do so.
// must have identical parameters as run_frame
void draw_frame(ZombieData *zombies, int zombie_count, PlayerData *player,
                Texture2D maze);

#endif
