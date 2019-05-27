#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "./createReadVector.cpp"
#include "./searchEquTranspose.cpp"
#include "./validateEquSizeTransposes.cpp"
#include "./validateEquCharTransposes.cpp"
#include "./genTranspose.cpp"
#include "./printTranspose.cpp"



int main () {

  int i = 0;
  int step = 0;



  std:: vector <std:: string> vec = createReadVector ("./data/input.txt");
  std:: vector <std:: string> middle = createReadVector ("./data/output.txt");


  if (validateEquSizeTransposes (vec, middle) == false) {

    std:: cout << "\n Размерность множеств не совпадает!\n\n";


    return 0;

  }


  if (validateEquCharTransposes (vec, middle) == false) {

    std:: cout << "\n Множества не имеют одинаковых символов!\n\n";


    return 0;

  }


  while (nextSet (vec, vec. size ())) {

    printTranspose (vec, middle, vec. size ());


    if (searchEquTranspose (vec, middle)) {

      step = i;

    }


    i++;

  }




  std:: cout << "Шаг при совпадении искомой перестановки \n";

  std:: cout << step << ": ";


  for (int i = 0; i < middle. size (); i++) {

    std:: cout << middle [i] << " ";

  }


  std:: cout << std:: endl;


  return 0;

}
