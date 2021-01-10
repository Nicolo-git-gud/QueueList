#include <assert.h>
#include "queue.h"
#include <iostream>
#include <string>

int main(){
    QueueList *q = QueueList_new();
    QueueList_pushback(q,5);
    QueueList_pushback(q,6);
    QueueList_pushback(q,7);
    QueueList *p = QueueList_new();
    QueueList_pushback(p,8);
    QueueList_pushback(p,9);
    QueueList_pushback(p,10);
    QueueList *MERGE1 = QueueList_Merge(q,p);
    std::cout << "Eseguo il primo merge, mi aspetto da 5 a 10 in ordine" << std::endl;
    QueueList_print(MERGE1);
    assert (MERGE1->tail->value == 10);
    QueueList *b = QueueList_new();
    QueueList *c = QueueList_Merge(b,q);
    assert (c->tail->value == 7);
    std::cout << "Eseguo il secondo merge, mi aspetto 5,6,7" << std::endl;
    QueueList *d = QueueList_Merge(q,b);
    QueueList_print(c);
    std::cout << "Eseguo il terzo merge, mi aspetto 5,6,7" << std::endl;
    QueueList_print(d);
    assert (d->tail->value == 7);
    QueueList *e = QueueList_new();
    QueueList *f = QueueList_Merge(e,b);
    assert (f->tail == nullptr);
    QueueList_delete(q);
    QueueList_delete(MERGE1);
    QueueList_delete(p);
    QueueList_delete(f);
    QueueList_delete(e);
    QueueList_delete(b);
    QueueList_delete(c);
    QueueList_delete(d);
}
