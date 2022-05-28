#include <raylib.h>
#include <stdio.h>

#include "game.h"
#include "draw.h"

#define GAMENAME "SAS 5"
#define WIDTH 800
#define HEIGHT 600
#define TARGETFPS 165

int main(void) {
  InitWindow(WIDTH, HEIGHT, GAMENAME);
  SetTargetFPS(TARGETFPS);
  Vector2 player_position = {(float)WIDTH/2, (float)HEIGHT/2};

  while (!WindowShouldClose()) {
    run_frame(&player_position);
    draw_frame(player_position);
  }
  CloseWindow();
}
