#include "fatt.h"

unsigned long int fatt(unsigned long int n) {
  if(n==1UL) {
    return 1UL;
  }
  else {
    return (n * fatt(n-1UL));
  }
}
