#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) {
  int sum_odds = 0;
  for(int i = 0; i < size; i++) {
    int current = a[i];
    sum_odds += isOdd(current) * current;
  }
  return sum_odds;
}
