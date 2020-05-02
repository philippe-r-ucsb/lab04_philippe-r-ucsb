#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include <cassert>

int maxOfArray(int a[], int size) {
  if (size < 1) {
    std::cerr << "ERROR: maxOfArray called with size < 1" << std::endl;
    exit(1);
  }
  int max = a[0];
  for(int i = 1; i < size; i++) {
    int current = a[i];
    if (current > max) {
      max = current;
    }
  }
  return max; // STUB!  Replace with correct code.
}
