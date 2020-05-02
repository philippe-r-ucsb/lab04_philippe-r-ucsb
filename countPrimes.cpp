#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
  int primes = 0;
  for(int i = 0; i < size; i++) {
    primes += isPrime(a[i]);
  }
  return primes; // STUB!  Replace with correct code.
}
