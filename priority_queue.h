//
// Created by islam on 1/13/21.
//

#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include "queue.h"
#define PRIORITIES 3

typedef struct priority_queue
{
    Queue queues[PRIORITIES];
}priority_queue_t;

 void init_priority_queue(priority_queue_t *pq); //upgrade
//void init_priority_queue(priority_queue_t *pq, int priorities);

void append_pq (priority_queue_t *pq, QueueEntry item, int priority);

QueueEntry serve_pq (priority_queue_t *pq);

int size_pq(priority_queue_t *pq);

int is_pq_full(priority_queue_t *pq);

int is_priority_full(priority_queue_t *pq, int priority);

int is_pq_empty(priority_queue_t *pq);

int is_priority_empty(priority_queue_t *pq, int priority);

void clear(priority_queue_t *pq);

#endif //PRIORITY_QUEUE_H
