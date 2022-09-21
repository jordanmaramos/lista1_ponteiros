#include <stdio.h>

int main(){
  int vet[] = {4,9,13};

  //O primeiro for imprime os valores do vetor
  for(int i=0;i<3;i++){
	  printf("%d ",*(vet+i));
  }

  printf("\n\n");
  
  //O segundo for imprime os endereços de cada posição do vetor
  int vet1[] = {4,9,13};
  for(int i=0;i<3;i++){
	  printf("%X ",vet+i);
  }

}

