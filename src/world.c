#include "world.h"
#include "definitions.h"
#include <math.h>
#include <raylib.h>

World2D world2d_from_vector2(Vector2 vec) {
  float ratiox = vec.x / (float)SCREEN_WIDTH;
  float ratioy = vec.y / (float)SCREEN_HEIGHT;
  World2D result;
  result.x = ratiox;
  result.y = ratioy;
  return result;
}
Vector2 vector2_from_world2d(World2D coords) {
  float x = coords.x * (float)SCREEN_WIDTH;
  float y = coords.y * (float)SCREEN_HEIGHT;
  Vector2 result;
  result.x = x;
  result.y = y;
  return result;
}
