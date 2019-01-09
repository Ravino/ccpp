#include <iostream>
#include <vector>




int printVec (std::vector <int> &vec) {

  std::cout << "Печать вектора" << std::endl;


  for (int i = 0; i < vec. size (); i++) {
    std::cout << vec [i] << std::endl;
  }


  return 0;

}

int swap (int *a, int *b) {

  int temp = *a;
  *a = *b;
  *b = temp;


  return 0;

}




int quitSort (std::vector <int> &vec, int first, int last) {

  int i = first;
  int j = last;
  int x = vec [(first + last) / 2];


  do {

    while (vec [i] < x) i++;

    while (vec [j] > x) j--;

    if (i <= j) {

      if (vec [i] > vec [j]) swap (&vec [i], &vec [j]);

      i++;
      j--;

    }

  } 
while (i <= j);


  if (i < last) {
    quitSort (vec, i, last);
  }


  if (first < j) {
    quitSort (vec, first, j);
  }


  return 0;

}




std::vector <int> createVector () {

  std::vector <int> vectorData;


  std::cout << "Создайте последовательность хаотичного типа" << std::endl;
  std::cout << "Для выхода из цикла введите ноль" << std::endl;

  int readData;


  for (;;) {

    std::cin >> readData;


    if (readData == 0) {
      std::cout << "Вы завершили ввод" << std::endl;
      break;
    }


    std::cout << "Вы ввели число: " << readData << std::endl;
    vectorData. push_back (readData);
  }


  return vectorData;

}




int exchange (std::vector <int> &vec, int i, int j) {

  int k;


  k = vec [i];
  vec [i] = vec [j];
  vec [j] = k;


  return 0;

}




int mediana (std::vector <int> &vec) {

  int size = vec. size ();
  int i = size / 4;


  if (vec [i] > vec [i * 2]) {

    if (vec [i] > vec [i * 3]) {
      exchange (vec, i, size);
    }

    else {
      exchange (vec, i * 3, size);
    }

  }

  else {

    if (vec [i * 2] > vec [i * 3]) {
      exchange (vec, i * 2, size);
    }

  }


  quitSort (vec, 0, vec. size () - 1);


  return 0;

}




int main () {

  std::vector <int> vec = createVector ();


  std::cout << "Исходный вектор" << std::endl;

  printVec (vec);


  mediana (vec);


  std::cout << "Результирующий вектор" << std::endl;

  printVec (vec);


  return 0;
}
