
#include "queue.h"
#include <iostream>
#include <string>

int main(){
    QueueList *q= QueueList_new();
    QueueList_pushback(q,1);
    std::cout << "Inizio a tenere traccia della tail, ora mi aspetto sia uguale all'head e cioè uno ...  lo stampo:  " << q->tail->value << std::endl;
    std::cout << "Provo il pushback e il pop dopo il pushback con un solo elemento e la stampa,mi aspetto di non avere numeri stampati" << std::endl;
     int l = QueueList_lenght(q);
    std::cout << "La lunghezza dopo il primo push e prima del pop è " << l << std::endl;
    QueueList_popback(q);
     std::cout << "Controllo la tail, in questo caso mi servo di un if perché sennò farei una read di nullptr mi aspetto niente ...   eseguoi:  " << std::endl;
     if(q->tail != nullptr) std::cout<< q->tail->value << std::endl;
     l = QueueList_lenght(q);
    std::cout << "La lunghezza dopo il primo pop è " << l << std::endl;
    QueueList_print(q);
    QueueList_pushback(q,2);
    std::cout << "Provo il pushback del secondo elemento dopo il pop e stampo, mi aspetto un solo numero" << std::endl;
    QueueList_print(q);
     std::cout << "Controllo la tail dopo il secondo push, mi aspetto due ...   stampo:  " << q->tail->value << std::endl;
    QueueList_pushback(q,3);
     std::cout << "Controllo la tail dopo il terzo push, mi aspetto tre ...   stampo:  " << q->tail->value << std::endl;
    QueueList_popback(q);
     std::cout << "Controllo la tail dopo il pop, mi aspetto di nuovo due ...   stampo:  " << q->tail->value << std::endl;
    QueueList_pushback(q,4);
    std::cout << "Controllo la tail dopo il quarto push, mi aspetto quattro ...   stampo:  " << q->tail->value << std::endl;
    std::cout << "Provo il pushback con più elementi e  stampo, mi aspetto due elementi" << std::endl;
    QueueList_print(q);
    l = QueueList_lenght(q);
    std::cout << "La lunghezza dopo quattro push e due pop è " << l << std::endl;
    
  
    QueueList_pushback(q,5);
    QueueList_pushback(q,6);
    QueueList_pushback(q,7);
    std::cout << "Controllo la tail a caso, mi aspetto sette ...   stampo:  " << q->tail->value << std::endl;
    std::cout << "Provo push e pop a caso, poi stampo" << std::endl;
    QueueList_pushback(q,8);
    QueueList_popback(q);
    QueueList_print(q);
    std::cout << "Provo ad eliminare tutta la lista senza arrivare a fare il throw err, ritrovandomi con una print che non stampa nulla" << std::endl;
    QueueList_popback(q);
    QueueList_popback(q);
    QueueList_popback(q);
    QueueList_popback(q);
    QueueList_popback(q);
    QueueList_print(q);
    l = QueueList_lenght(q);
    std::cout << "La lunghezza finale è " << l << std::endl;
    
    std::cout << "Creo una lista p e provo a fare il pop, mi aspetto la gestione dell'errore" << std::endl;
    QueueList *p =  QueueList_new();
    try {
        QueueList_popback(p);
    }
    catch(std::string err){
        std::cout << "Errore gestito correttamente" << std::endl;
    }
    QueueList_delete(p);
    QueueList_delete(q);
}
