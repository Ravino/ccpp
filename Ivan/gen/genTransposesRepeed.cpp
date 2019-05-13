#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "./createReadVector.cpp"
#include "./searchEquTranspose.cpp"



int swap (std:: vector <std:: string> &vec, int i, int j) {

  std:: string s = vec [i];


  vec [i] = vec [j];
  vec [j] = s;


  return 0;

}




bool nextSet (std:: vector <std:: string> &vec, int n) {


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

int Print (std:: vector <std:: string> &vec, std:: vector <std:: string> &vecs, int n) {

  static int num = 1;


  std:: cout.width(3);
  std:: cout << num++ << ": ";


  if (num == 19) vec = vecs;


  for (int i = 0; i < n; i++) {

    std:: cout << vec [i] << " ";

  }


  std:: cout << std:: endl;


  return 0;

}




int main () {


  int i = 0;
  int step = 0;

  std:: vector <std:: string> vec = createReadVector ("./data/input.txt");


  std:: vector <std:: string> middle = createReadVector ("./data/output.txt");


  while (nextSet (vec, vec. size ())) {

    Print (vec, middle, vec. size ());


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
