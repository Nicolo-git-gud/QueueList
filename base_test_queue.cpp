
#include "queue.h"
#include <iostream>
#include <string>

int main(){
    QueueList *q= QueueList_new();
    QueueList_pushback(q,5);
    std::cout << "Provo il pushback con un solo elemento e la stampa" << std::endl;
    QueueList_print(q);
    QueueList_pushback(q,6);
    std::cout << "Provo il pushback con due elementi e la stampa" << std::endl;
    QueueList_print(q);
    QueueList_pushback(q,7);
    QueueList_pushback(q,8);
    std::cout << "Provo il pushback con più elementi e la stampa" << std::endl;
    QueueList_print(q);
    int l = QueueList_lenght(q);
    std::cout << "La lunghezza è " << l << std::endl;
    QueueList_delete(q);
}
