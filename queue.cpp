#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>


class Queue {

  private:
    int *storage = new int;
    int *store = new int;
    int *space = new int;
    int countStorage = -1;
    int countStore = -1;


  public:
    void push (int item) {
      printf ("Добавление элемента\n");

      countStorage = countStorage + 1;
      storage [countStorage] = item;

      printf ("Элемент %d добавлен\n", item);
      printf ("Количество %d \n", countStorage + 1);
    }


    void pop () {
      printf ("Удаление элемента\n");

      if (countStorage < 0) {
        printf ("Элементов нет\n");
        return;
      }

      if (countStorage < 1) {
        printf ("Элемент %d удалён\n", storage [0]);
        countStorage = countStorage - 1;
        storage = space;
        store = space;
        return;
      }

      if (countStorage > 0) {

        for (int i = 1; i <= countStorage; i++) {
          store [f] = storage [i];
        }

        printf ("Элемент %d удалён\n", storage [0]);
        storage = store;
        store = space;
        countStorage = countStorage - 1;
      }
    }


    void print () {
      printf ("Печать элементов очереди\n");

      for (int i = 0; i <= countStorage; i++) {
        printf ("%d\n", storage [i]);
      }
    }


    void free () {
      delete storage;
      delete store;
      delete space;
    }
};




int main () {

  int item;

  std::string menu [4];
  menu [0] = "Добавить: 0\n";
    menu [1] = "Удалить: 1\n";
    menu [2] = "Печать: 2\n";
    menu [3] = "Выход: 3\n";



  Queue queue;

  queue. push (33);
  queue. push (3312);
  queue. push (3367);


  queue. print ();

  queue. pop ();
//  queue. pop ();

//  queue. print ();

  queue. free ();

  return 0;
}
