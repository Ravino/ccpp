#include <stdlib.h>
#include <iostream>
#include <vector>



namespace matrixlib {

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




std::vector <std::vector <int>> createMatrix () {

  int row;
  int column;


  std::vector <std::vector <int>> matrix;


  std::cout << "Введите количество строк матрицы" << std::endl;
  std::cin >> row;


  std::cout << "Введите количество столбцов матрицы" << std::endl;
  std::cin >> column;


  matrix. resize (row);

  for (int i = 0; i < matrix. size (); i++) {

    matrix [i]. resize (column);

  }


  for (int i = 0; i < row; i++) {

    for (int j = 0; j < column; j++) {

      matrix [i] [j] = rand () % 100 + 1;

    }

  }


  return matrix;

}




std::vector <std::vector <int>> transpose (std::vector <std::vector <int>> matrix) {

  std::vector <std::vector <int>> newMatrix;


  newMatrix. resize (matrix. size ());


  for (int i = 0; i < matrix. size (); i++) {

    newMatrix [i]. resize (matrix [i]. size ());

  }


  for (int i = 0; i < matrix. size (); i++) {

    for (int j = 0; j < matrix [i]. size (); j++) {

      newMatrix [j] [i] = matrix [i] [j];

    }

  }


  return newMatrix;

}




int binarySearch (std::vector <int> &vec) {


  int searchElem;


  std::cout << "Введите искомый элемент" << std::endl;
  std::cin >> searchElem;
  std::cout << "Искомый элемент равен: " << searchElem << std::endl;


  int left = 0;
  int right = vec. size () - 1;
  int searchIndElem = -1;


  while (left <= right) {

    int mid = (left + right) / 2;


    if (searchElem == vec [mid]) {

      searchIndElem = mid;


      break;

    }


    if (searchElem < vec [mid]) {

      right = mid - 1;

      continue;

    }


    left = mid + 1;

  }


  if (searchIndElem > -1) {

    std::cout << "Элемент найден с позицией: " << searchIndElem << std::endl;


  return 0;

  }


  std::cout << "Элемент не найден!\n" << std::endl;


  return 0;

}





int sortRowMatrix (std::vector <std::vector <int>> &matrix) {

  for (int i = 0; i < matrix. size (); i++) {

    quitSort (matrix [i], 0, matrix [0]. size () - 1);

  }


  return 0;

}



int binarySearchMatrix (std::vector <std::vector <int>> &matrix) {

  for (int i = 0; i < matrix. size (); i++) {

    binarySearch (matrix [i]);

  }


  return 0;

}





int printMatrix (std::vector <std::vector <int>> &matrix) {

  std::cout << "Печать матрицы" << std::endl;


  for (int i = 0; i < matrix. size (); i++) {

    std::cout << std::endl << "Строка: " << i + 1 << std::endl;


    for (int j = 0; j < matrix [i]. size (); j++) {

      std::cout << matrix [i] [j] << " ";

    }

  }


  return 0;

}



}
