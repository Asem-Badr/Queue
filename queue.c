#include "queue.h"
#include <stdio.h>

void createQueue (Queue* q)
{
    q -> qcount = 0 ;
    q -> qfront =0 ;
    q -> qrear = -1 ;
}
void append (Queue *q, QueueEntry e)
{
    if (queueFull(q))
    {
         printf("Full queue can't append ") ;
    }
    else
    {
    q->qcount ++ ;
    q->qrear = (q->qrear +1)%MAXQUEUE ;
    q->entry[q->qrear] = e ;
    }
}
void serve (Queue *q, QueueEntry *e)
{
    if(queueFull(q)== 1)
    {
        printf("Empty queue can't setve ");
    }
    else
    {
        *e = q->entry[q->qfront];
        q->qfront = (q->qfront +1)% MAXQUEUE ;
        q->qcount -- ;
    }
}
int queueSize (Queue *q)
{
    return q->qcount ;
}
int queueFull (Queue *q)
{
    return q -> qcount == MAXQUEUE-1 ;
}
int queueEmpty (Queue *q)
{
    return q->qcount == 0 ;
}
void queueClear(Queue *q)
{
    q -> qcount = 0 ;
    q -> qfront = 0 ;
    q -> qrear = -1 ;
}
