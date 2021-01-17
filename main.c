#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
    Queue q1 ;
    Queue*q = &q1 ;
    createQueue(q);
    printf("Hello world!\n");
    append(q, 5);
    int x ;
    serve(q,&x);
    printf("%d",x);
    return 0;
}
