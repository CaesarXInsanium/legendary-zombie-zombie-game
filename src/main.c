#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>

#include "definitions.h"
#include "draw.h"
#include "game.h"
#include "map.h"

int main(void) {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, GAMENAME);
  SetTargetFPS(TARGETFPS);
  Texture2D maze = load_image_texture("share/simple_maze.png");

  PlayerData *playerdata = (PlayerData *)malloc(sizeof(PlayerData));
  PlayerData_init(playerdata, Vector2_new(0.0, 0.0));

  while (!WindowShouldClose()) {
    run_frame(NULL, 0, playerdata);
    draw_frame(NULL, 0, playerdata, maze);
  }
  PlayerData_destroy(playerdata);
  CloseWindow();
}
