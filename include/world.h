#ifndef WORLD_H
#define WORLD_H
#include "definitions.h"
#include <raylib.h>
// floating representation of location in screen space
typedef struct World2D {
  double x;
  double y;
} World2D;

World2D world2d_from_vector2(Vector2 vec);
Vector2 vector2_from_world2d(World2D coords);
#endif
