#include "game.h"
#include "definitions.h"
#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>

Vector2 Vector2_new(double x, double y) {
  Vector2 result;
  result.x = x;
  result.y = y;
  return result;
}

void PlayerData_init(PlayerData *data, Vector2 pos) { data->pos = pos; }
void PlayerData_destroy(PlayerData *data) { free(data); }
void PlayerData_update_pos(PlayerData *data, Vector2 pos) { data->pos = pos; }

void update_player_pos(Vector2 *pos) {
  if (IsKeyDown(KEY_D))
    pos->x += PLAYER_SPEED;
  if (IsKeyDown(KEY_A))
    pos->x -= PLAYER_SPEED;
  if (IsKeyDown(KEY_W))
    pos->y -= PLAYER_SPEED;
  if (IsKeyDown(KEY_S))
    pos->y += PLAYER_SPEED;
}

void run_frame(ZombieData *zombies, int zombie_count, PlayerData *player) {
  if (zombies != NULL) {
    printf("Zombie Count: %d", zombie_count);
  }
  if (player == NULL) {
    puts("Catastropic failure: player is NULL");
    exit(0);
  }
   update_player_pos(&player->pos);
}
