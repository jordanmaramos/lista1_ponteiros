# include<gc.h>
# include<assert.h>
# include<stdio.h>

/* O libGC (Garbage Collector) implementa um coletor de lixo em C. 
É usada para substituir o malloc, fazendo alocação de memória, sem 
desalocar a memória que não é mais útil. */

int main () {
    GC_INIT (); // Inicializar um LibGC
    int *p = (int*) GC_MALLOC (1000 * sizeof(int)); // A memória é alocada por meio da função GC_MALLOC.
    int *q = (int*) GC_MALLOC (1000 * sizeof(int));
    *p = 50 ;
    *q = 25 ;
    int soma = *p + *q;
    printf("Soma = %d ", soma);
    return 0;
}