#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "elabora.h"

int main(int argc, char *argv[]) {
  int risultato;
  char *ptrNomeProgramma = malloc(10);
  char *ptrPrimoArgomento = malloc(4);
  char *array_parametri[2];
  array_parametri[0] = ptrNomeProgramma;
  array_parametry[1] = ptrPrimoArgomento;
  strcpy(ptrNomeProgramma, "programma");
  strcpy(ptrPrimoArgomento, "€");
  elabora(2, array_parametri);
  
  return 0;
}
