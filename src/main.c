#include "test.h"
#include <raylib.h>
#include <stdio.h>

#define WIDTH 800
#define HEIGHT 600

int main(void) {
  InitWindow(WIDTH, HEIGHT, "raylib");
  SetTargetFPS(32);

  while (!WindowShouldClose()) {
    BeginDrawing();
    EndDrawing();
  }
  CloseWindow();
}
