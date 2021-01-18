#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "priority_queue.h"

int main()
{
    priority_queue_t pq1;
    priority_queue_t*pq =&pq1;
    Queue q1 ;
    Queue*q = &q1 ;
    createQueue(q);
    init_priority_queue(pq);
    append_pq(pq,20,1);
    printf("Hello world!\n");
    append(q, 5);
    int x ,y;
    y=serve_pq(pq);
    serve(q,&x);
    printf("%d\n%d",x,y);
    return 0;
}
