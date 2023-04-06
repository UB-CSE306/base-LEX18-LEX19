#include <stdio.h>
#include "cart.h"

double cart(int x, double y) {
  double z = x * y;
  printf("$%.2f\n",z);
  return z;
}
