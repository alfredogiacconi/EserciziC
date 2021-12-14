#include "fatt.h"

unsigned long long int fatt(unsigned long long int n) {
  if(n==1ULL) {
    return 1ULL;
  }
  else {
    return (n * fatt(n-1ULL));
  }
}
