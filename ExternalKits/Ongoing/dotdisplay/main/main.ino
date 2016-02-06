// print digit 0 in both displays

#include "dot_display.h"

struct Point
{
  uint8_t x;
  uint8_t y;
};

void setup() {
  dot_display_init();
}


void loop() {

  // List of points to draw 0
  Point number_0[12] = {Point{0,0}, Point{1,0}, Point{2,0}, Point{2,1}, Point{2,2}, Point{2,3}, Point{2,4}, Point{1, 4}, Point{0,4}, Point{0,3}, Point{0,2}, Point{0,1}};

  // Draw with shift (1,1)
  for (auto num0 : number_0)
    {
      blink_point(num0.x + 1, num0.y + 1, 1);
    }

  // Draw with shift (6,1)
  for (auto num0 : number_0)
    {
      blink_point(num0.x + 6, num0.y + 1, 1);
    }
}
