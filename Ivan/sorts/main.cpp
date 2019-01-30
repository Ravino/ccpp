#include <iostream>
#include <vector>
#include <random>
#include <ctime>

#include "./sorts.cpp"




int genRand () {

  std::default_random_engine engine;

//  std::uniform_int_distribution <int> dist [1, 6];


  return 1 + engine () % 6;

}




std::vector <int> createVector () {

  std::vector <int> vec;

  int sizeVec;


  std::cout << "\n\nВведите размерность массива\n\n";

  std::cin >> sizeVec;


  std::cout << "\n\nЗаполните массив\n\n";


  for (int i = 0;  i < sizeVec;  i++) {

    vec. push_back (genRand ());

  }


  return vec;

}


int main () {

  return 0;

}
