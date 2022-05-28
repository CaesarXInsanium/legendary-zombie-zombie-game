#include "game.h"
#include <raylib.h>

void run_frame(Vector2 *player_position) {
  if (IsKeyDown(KEY_RIGHT))
    player_position->x += 2.0f;
  if (IsKeyDown(KEY_LEFT))
    player_position->x -= 2.0f;
  if (IsKeyDown(KEY_UP))
    player_position->y -= 2.0f;
  if (IsKeyDown(KEY_DOWN))
    player_position->y += 2.0f;
}
