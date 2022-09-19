#include <stdio.h>

int main()
{
    int i,j;
    int *p, *q;

    //p = i; Não é possível igualar ponteiro diretamente a inteiro. o correto seria p = &i
    q = &j;
    p = &*&i;
    i = (*&)j;
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q;

    return 0;
}
