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


  std::cout << "\n Минимальное число перестановок " << sorts::twoPathCountTransposeMin << ". Максимальное число перестановок " << sorts::twoPathCountTransposeMax << ". Среднее число перестановок " << sorts::twoPathCountTransposeMiddle << "\n";


  std::cout << "Минимальное число сравнений " << sorts::twoPathCountEquMin << ". Максимальное число сравнений " << sorts::twoPathCountEquMax << ". Среднее число сравнений " << sorts::twoPathCountEquMiddle << "\n\n";






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


//  std::cout << "\n Минимальное число перестановок " << sorts::shekerCountTransposeMin << ". Максимальное число перестановок " << sorts::shekerCountTransposeMax << ". Среднее число перестановок " << sorts::shekerCountTransposeMiddle << "\n";

//  std::cout << "Минимальное число сравнений " << sorts::shekerCountEquMin << ". Максимальное число сравнений " << sorts::shekerCountEquMax << ". Среднее число сравнений " << sorts::shekerCountEquMiddle << "\n\n";

  std::cout << "\n\n Число перестановок " << sorts::countPermutation << std::endl;


  return 0;

}
