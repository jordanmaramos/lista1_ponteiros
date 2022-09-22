#include <stdio.h>

int main(){
  /* Imprimindo endereços de x quando declarado como char */
  char x[4];
  char *p;
  p = x;
  printf("p = %X\n", p);
  p=x+1;
  printf("p = %X\n", p);
  p=x+2;
  printf("p = %X\n", p);
  p=x+3;
  printf("p = %X\n\n", p);

  /* Imprimindo endereços de x quando declarado como int */
  int x1[4];
  int *p1;
  p1 = x1;
  printf("p = %X\n", p1);
  p1=x1+1;
  printf("p = %X\n", p1);
  p1=x1+2;
  printf("p = %X\n", p1);
  p1=x1+3;
  printf("p = %X\n\n", p1);

  /* Imprimindo endereços de x quando declarado como float */
  float x2[4];
  float *p2;
  p2 = x2;
  printf("p = %X\n", p2);
  p2=x2+1;
  printf("p = %X\n", p2);
  p2=x2+2;
  printf("p = %X\n", p2);
  p2=x2+3;
  printf("p = %X\n\n", p2);

  /* Imprimindo endereços de x quando declarado como double */
  double x3[4];
  double *p3;
  p3 = x3;
  printf("p = %X\n", p3);
  p3=x3+1;
  printf("p = %X\n", p3);
  p3=x3+2;
  printf("p = %X\n", p3);
  p3=x3+3;
  printf("p = %X\n\n", p3);
  
  return 0;
}

