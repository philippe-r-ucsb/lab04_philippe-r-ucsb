// utility.h
#ifndef HEADER_H
#define HEADER_H

// IN THIS FILE, declare (function prototype only) any of your 
// OWN functions you may need to solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions
#include <vector>
extern std::vector<int> primes;


bool isOdd(int x);
bool isEven(int x);
bool isPrime(int x);
#endif
