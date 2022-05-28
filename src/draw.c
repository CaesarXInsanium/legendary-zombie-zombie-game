#include "draw.h"
#include <raylib.h>

void draw_frame(Vector2 player_position) {
  BeginDrawing();
  ClearBackground(RAYWHITE);
  DrawText("moving player", 10, 10, 20, DARKGRAY);
  DrawCircleV(player_position, 13, MAROON);
  EndDrawing();
}
