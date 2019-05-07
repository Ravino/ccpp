#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "./createReadVector.cpp"
#include "./searchEquTranspose.cpp"



int swap (std:: vector <int> &vec, int i, int j) {

  int s = vec [i];


  vec [i] = vec [j];
  vec [j] = s;


  return 0;

}




bool nextSet (std:: vector <int> &vec, int n) {


  int j = n - 2;


  while (j != -1 && vec [j] >= vec [j + 1]) j--;


  if (j == -1) {

    return false; // больше перестановок нет

  }


  int k = n - 1;


  while (vec [j] >= vec [k]) k--;


  swap (vec, j, k);


  int l = j + 1, r = n - 1;


  while (l < r) {

    swap(vec, l++, r--);

  }


  return true;

}




// вывод перестановки

int Print (std:: vector <int> &vec, int n) {

  static int num = 1;


  std:: cout.width(3);
  std:: cout << num++ << ": ";


  for (int i = 0; i < n; i++) {

    std:: cout << vec [i] << " ";

  }


  std:: cout << std:: endl;


  return 0;

}




int main () {


  int i = 0;
  int step = 0;

  std:: vector <int> vec = createReadVector ("./data/input.txt");


  std:: vector <int> middle = createReadVector ("./data/output.txt");


  while (nextSet (vec, vec. size ())) {

    Print (vec, vec. size ());


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
