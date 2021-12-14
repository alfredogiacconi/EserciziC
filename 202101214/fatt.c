#include "fatt.h"

int long fatt(long int n) {
  if(n==1L) {
    return 1;
  }
  else {
    return (n * fatt(n-1L));
  }
}
