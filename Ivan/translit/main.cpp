#include <iostream>
#include <cstring>
#include <cassert>

#include "src/translit.h"
#include "src/translit.cpp"

int main () {

  std::cout << "\n\nТестирование\n\n";


  assert (strcmp ("Moloko vkusnoe", translit((const unsigned char *) "Молоко вкусное")) == 0);


  std::cout << "\n\nТестирование завершено успешно\n\n";

  std::cout << "\n\nВыполняем транслит\n\n";


  std::cout << translit((const unsigned char *) "Молоко вкусное") << std::endl;


  return 0;

}
