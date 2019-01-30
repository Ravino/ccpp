#include <iostream>

#include "./sorts.cpp"




int *createArr () {

  std::cout << "\n\nВведите размерность массива\n\n";


  int sizeArr;


  std::cin >> sizeArr;


  int arr [sizeArr];


  std::cout << "\n\nЗаполните массив\n\n";


  for (int i = 0;  i < sizeArr;  i++) {

    std::cout "\nЯчейка " << (i + 1) << " из " << sizeArr << "\n";


    std::cin >> arr [i];

  }


  return arr;

}


int main () {

  return 0;

}
