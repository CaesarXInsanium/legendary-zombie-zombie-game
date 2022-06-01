#include "draw.h"
#include "zombie.h"
#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void draw_frame(ZombieData *zombies, int zombie_count, PlayerData *player,
                Texture2D maze) {
  if (zombies != NULL) {
    printf("%d zombies exist", zombie_count);
  }
  BeginDrawing();
  ClearBackground(RAYWHITE);

  DrawTexture(maze, 0, 0, WHITE);

  Vector2 player_position = player->pos;
  char *player_pos_text = "Player Pos: {%f,%f}";
  char *result = (char *)malloc(strlen(player_pos_text) + 20);
  sprintf(result, player_pos_text, player_position.x, player_position.y);
  DrawText("Player", 10, 10, 20, DARKGRAY);
  DrawCircleV(player_position, 13, MAROON);
  EndDrawing();
}
