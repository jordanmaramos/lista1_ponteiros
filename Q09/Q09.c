#include <stdio.h>

int main(){
  char x[4];
  
  /* Por ser char, cada posição ocupa apenas bit. 
  Ao incrementar x[4], a posição de x[0] desloca de 4 em 4 */
  // Ex:
  //x =    4D15E094
  //x+1 =  4D15E098
  //x+2 =  4D15E09C
  //x+3 =  4D15E0A0
  
  int x[4];
  /* Por ser int, ocupa 2 espaços da memória */
  //x =    A20B3C60
  //x+1 =  A20B3C64
  //x+2 =  A20B3C68
  //x+3 =  A20B3C6C
  
  
  return 0;
}