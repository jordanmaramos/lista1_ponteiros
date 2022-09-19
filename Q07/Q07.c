#include <stdio.h>

int main() {
  int mat[4] = {2, 4, 6, 8};
  int *p, x;

  p = mat + 1;
  //p = mat++; Comando inválido
  //p = ++mat; Comando inválido
  x = (*mat)++;

  return 0;
}
