#include "fatt.h"

unsigned int long fatt(unsigned long int n) {
  if(n==1UL) {
    return 1UL;
  }
  else {
    return (n * fatt(n-1UL));
  }
}
