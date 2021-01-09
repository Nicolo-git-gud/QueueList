
#include "queue.h"
#include <iostream>
#include <string>


QueueList *QueueList_new() {
    QueueList *l = new QueueList;
    l->head = nullptr;
    l->tail = nullptr;
    l->lenght = 0;
    return l;
}

int QueueList_lenght(QueueList *l){
    return  l->lenght;
}

void QueueList_delete(QueueList *l){
    while(l->head!=nullptr){
        Cell *temp=l->head;
        l->head=l->head->next;
        delete temp;
    }
   // l->tail = nullptr;
    delete l;
}
void  QueueList_print(QueueList *l){
    Cell *aux = l->head;
    while(aux != nullptr){
    std::cout << aux->value << std::endl;
    aux = aux->next;
    }
}

void QueueList_pushback(QueueList *l, int x){

    if(l->head==nullptr){
        Cell *primo = new Cell;
        primo->value = x;
        primo->next=nullptr;
        l->head = primo;
        l->lenght = 1;
        l->tail = primo;
        return;
    }
    Cell *cur = new Cell;
    cur->value = x;
    cur->next = nullptr;
    l->tail->next = cur;
    l->tail = cur;
    l->lenght++;
}
