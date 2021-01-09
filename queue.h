#ifndef queue_h
#define queue_h

struct Cell {
    int value;
    Cell *next;
};

struct QueueList {
    Cell *head;
    int lenght;
    Cell *tail;
};

QueueList *QueueList_new();
int QueueList_lenght(QueueList *l);
void  QueueList_delete(QueueList *l);
void  QueueList_print(QueueList * l);
void QueueList_pushback(QueueList *l, int x);












#endif 
