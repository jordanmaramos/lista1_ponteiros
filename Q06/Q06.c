#include <stdio.h>

int main()
{   
  int pulo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int aux;

  //A primeira opção acessa a posição 2 do vetor
  aux = *(pulo + 2);
  
  aux = *(pulo + 4);
  
  aux = pulo + 4;
  
  aux = pulo + 2;

  return 0;
}