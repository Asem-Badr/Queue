#ifndef QUEUE_H
#define QUEUE_H
#define MAXQUEUE 100
typedef int QueueEntry ;
typedef struct myqueue {
    int qcount;
    int qfront;
    int qrear;
QueueEntry entry [MAXQUEUE];
} Queue ;

void createQueue (Queue* q);
void append (Queue *q , QueueEntry e);
void serve (Queue *q , QueueEntry *e);
int queueSize (Queue *q);
int queueFull (Queue *q);
int queueEmpty (Queue *q);
void queueClear(Queue *q);


#endif // QUEUE_H_INCLUDED
