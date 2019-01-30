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


  std::cout << "\n Печать исходного массива \n";


  sorts::print (vec);


  std::cout << "\n Выполняется сортировка twoPath \n";


  sorts::twoPath (vec);


  std::cout << "\n Печать массива после twoPath\n";


  sorts:: print (vec);


  std::cout << "\n Число перестановок " << sorts::twoPathCountTranspose << ". Число сравнений " << sorts::twoPathCountEqu << "\n";






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


  std::cout << "\nПечать исходного массива \n";


  sorts::print (vec);


  std::cout << "\nВыполняется сортировка sheker\n";


  sorts:: sheker (vec);


  std::cout << "\nПечать массива после применения сортировки sheker\n";


  sorts::print (vec);


  std::cout << "\n Число перестановок " << sorts::shekerCountTranspose << ". Число сравнений " << sorts::shekerCountEqu << "\n";


  return 0;

}
