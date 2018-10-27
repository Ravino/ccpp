#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>


class Stack {

  private:
    int *storage = new int;
    int *store = new int;
    int countStorage = -1;
    int countStore = -1;


  public:
    void push (int item) {
      printf ("Добавление элемента\n");

      countStorage = countStorage + 1;
      storage [countStorage] = item;

      printf ("Элемент %d добавлен\n", item);
    }


    void pop () {
      printf ("Удаление элемента\n");

      if (countStorage <= -1) {
        printf ("Элементов нет\n");
        return;
      }

      for (int i = 0; i <= (countStorage - 1); i++) {
        store [i] = storage [i];
      }


      printf ("Элемент %d удалён\n", storage [countStorage]);
      storage = store;
      countStorage = countStorage - 1;
    }


    void print () {
      printf ("Печать элементов стека\n");

      for (int i = countStorage; i > -1; i--) {
        printf ("%d\n", storage [i]);
      }
    }


    void free () {
      delete storage;
      delete store;
    }
};




int main () {

  int item;

  std::string menu [4];
  menu [0] = "Добавить: 0\n";
    menu [1] = "Удалить: 1\n";
    menu [2] = "Печать: 2\n";
    menu [3] = "Выход: 3\n";



  Stack stack;

  stack. push (33);
  stack. push (3312);
  stack. push (3367);


  stack. print ();

  stack. pop ();
  stack. pop ();

  stack. print ();

  stack. free ();

  return 0;
}
