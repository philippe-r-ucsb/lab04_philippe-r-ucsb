// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to
// solve the problems.

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

#include<vector>
#include<iostream>

using namespace std;

bool isOdd(int x) {
  return x % 2;
}

bool isEven(int x) {
  return !isOdd(x);
}

bool contains(vector<int> ordered_list, int query) {
  for(int i = 0; i < ordered_list.size(); i++) {
    if ( ordered_list[i] == query ) { return true; }
  }
  return false;
  // int size = ordered_list.size();
  // int hi = size;
  // int lo = 0;
  // int midpoint = size / 2;
  // if (size == 0 || query < ordered_list[lo] || query > ordered_list[hi - 1]) {
  //   return false;
  // }

  // for(;;) {
  //   if (ordered_list[midpoint] == query) { return true; }
  //   if (lo == hi) { return false; }
  //   else if (ordered_list[midpoint] > query) {
  //     lo = midpoint+1;
  //   } else {
  //     hi = midpoint;
  //   }
  //   midpoint = lo + (hi - lo) / 2;
  // }
}

// vector is expected to be ordered from smallest to largest
int largest(vector<int> v) {
  return v[v.size() - 1];
}

vector<int> primes = {2, 3};

void add_prime() {
  bool is_prime;
  for (int n = largest(primes) + 1; n++;) {
    is_prime = true;
    for (int i = 0; primes[i] * primes[i] < n && i < primes.size(); i++) {
      if (n % primes[i] == 0) {
        is_prime = false;
        break;
      }
    }

    if (is_prime) {
      primes.push_back(n);
      break;
    }
  }
}


bool isPrime(int x) {
  while (largest(primes) < x) {
    add_prime();
  }

  return contains(primes, x);  // REPLACE THIS STUB WITH REAL CODE
}
