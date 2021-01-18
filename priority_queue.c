#include "priority_queue.h"
#include <stdio.h>
#include <stdlib.h>


void init_priority_queue(priority_queue_t *pq) //upgrade
{
    int i ;
    for (i=0; i<PRIORITIES; i++)
    {
        createQueue(&pq->queues[i]);
    }
}

void append_pq (priority_queue_t *pq, QueueEntry item, int priority)
{
    if (is_priority_full(pq,priority))
    {
        printf("queue of priority :%d is full",priority);
    }
    else
    {
        append(&pq->queues[priority],item);
    }
}

QueueEntry serve_pq (priority_queue_t *pq)
{
    //finding highest priority
    QueueEntry element ;
    int i ;
    for(i = 0 ; i <PRIORITIES ; i++)
    {
        if (queueSize( &pq->queues[i] )!= 0 )
        {
            serve(&pq->queues[i],&element);
            break ;
        }
    }
    return element ;

}

int size_pq(priority_queue_t *pq)
{
    int i,size=0 ;
    for(i = 0; i < PRIORITIES ; i++)
    {
        size += queueSize(&pq->queues[i]);
    }
    return size ;
}

int is_pq_full(priority_queue_t *pq)
{
    int i,count=0 ;
    for(i = 0; i < PRIORITIES ; i++)
    {
        count += queueFull(&pq->queues[i]);
    }
    return count == PRIORITIES ;
}

int is_priority_full(priority_queue_t *pq, int priority)
{
    return queueFull(&pq->queues[priority]);
}

int is_pq_empty(priority_queue_t *pq)
{
    int i,count=0 ;
    for(i = 0; i < PRIORITIES ; i++)
    {
        count += queueEmpty(&pq->queues[i]);
    }
    return count == PRIORITIES ;
}

int is_priority_empty(priority_queue_t *pq, int priority)
{
    return queueEmpty( &pq->queues[priority]);
}

void clear(priority_queue_t *pq)
{
    int i ;
    for (i=0; i<PRIORITIES; i++)
    {
        queueClear(&pq->queues[i]);
    }
}
