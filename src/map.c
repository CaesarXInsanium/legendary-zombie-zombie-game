#include "map.h"
#include <raylib.h>

// does no modifications
Texture2D load_image_texture(const char *path) {
  Image image = LoadImage(path);
  return LoadTextureFromImage(image);
}
