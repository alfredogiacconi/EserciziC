#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "elabora.h"

void elabora(int contatore_parametri, char *parametri[]) {
  char buffer[4];
  strncpy(buffer, parametri[1], sizeof(buffer));
  printf("%s\n", buffer);
  printf("%2.2x %2.2x %2.2x\n", 
         (unsigned char) buffer[0],
         (unsigned char) buffer[1],
         (unsigned char) buffer[2]);
}
