#include <stdio.h>

int main()
{
    /* 1. Seja o seguinte trecho de programa */
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    /* Determine o valor das seguintes expressões: */

    //p == &i //Verdadeiro. p recebe o endereço de i
    printf("p = %p = &i = %p\n", p, &i);

    //*p - *q; == -2
    printf("*p - *q = %d\n", *p-*q);

    //**&p = Dereferenciamento do endereço do ponteiro = valor do ponteiro = 3
    printf("%d\n", **&p);

    //3 - *p/(*q) + 7 = 10
    printf("%d\n", 3 - *p/(*q) + 7);

    return 0;
}
