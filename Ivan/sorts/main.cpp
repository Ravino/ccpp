#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <ctime>
#include <string>

#include "./sorts.cpp"




int main () {

  std::vector <int> vec;


  while (true) {

    int item;


    sorts::menu ();


    std::cin >> item;

    if (item == 1) {

      vec = sorts::createReadVector ();


      break;

    }


    if (item == 2) {

      vec = sorts::createArmVector ();


      break;

    }


    if (item == 3) {

      vec = sorts::createRandomVector ();


      break;

    }


    if (item == 0) {

      exit (0);

    }

  }


  std::cout << std::clock () << "\n";
  return 0;

}
