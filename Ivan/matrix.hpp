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




std::vector <std::vector <int>> transpose (std::vector <std::vector <int>> &matrix) {

  std::vector <std::vector <int>> newMatrix;


  newMatrix. resize (matrix [0]. size ());


  for (int i = 0; i < newMatrix. size (); i++) {

    newMatrix [i]. resize (matrix. size ());

  }


  for (int i = 0; i < matrix. size (); i++) {

    for (int j = 0; j < matrix [i]. size (); j++) {

      newMatrix [j] [i] = matrix [i] [j];

    }

  }


  return newMatrix;;

}




int binarySearch (std::vector <int> &vec, int numVec, int searchElem) {


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

    std::cout << "Элемент найден с позицией: " << numVec << std::endl;


  return 0;

  }


  std::cout << "Элемент не найден с позицией: " << numVec << "!\n" << std::endl;


  return 0;

}





int sortRowMatrix (std::vector <std::vector <int>> &matrix) {

  for (int i = 0; i < matrix. size (); i++) {

    quitSort (matrix [i], 0, matrix [0]. size () - 1);

  }


  return 0;

}



int binarySearchMatrix (std::vector <std::vector <int>> &matrix) {

  int searchElem;


  std::cout << "Введите искомый элемент" << std::endl;
  std::cin >> searchElem;


  for (int i = 0; i < matrix. size (); i++) {

    binarySearch (matrix [i], i + 1, searchElem);

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




std::vector <int> slice (std::vector <int> &vec, int start, int stop) {

  std::vector <int> newVec;


  for (int i = start; i <= stop; i++) {

    newVec. push_back (vec [i]);

  }


  return newVec;

}




int uniformBinarySearch (std::vector <int> &vec, int start, int size, int numVec, int searchElem) {

  int doublSize = size / 2;


  if (searchElem == vec [size]) {

    std::cout << "Искомый элемент найден! Позиция элемента : " << numVec << std::endl;


    return 0;

  }



  if (searchElem == vec [doublSize]) {

    std::cout << "Искомый элемент найден. Позиция: " << numVec << std::endl;


    return 0;

  }


  if (searchElem == vec [start]) {

    std::cout << "Искомый элемент найден. Позиция: " << numVec << std::endl;


    return 0;

  }


  if (size > 3) {

    if (searchElem < vec [doublSize]) {

      uniformBinarySearch (vec, start, doublSize, numVec, searchElem);


      return 0;

    }


    if (searchElem > vec [doublSize]) {

      std::vector <int> vecSlice = slice (vec, doublSize, size);
      uniformBinarySearch (vecSlice, 0, vecSlice. size (), numVec, searchElem);


    return 0;

    }

  }


  for (int i = 0; i < 3; i++) {

    if (searchElem == vec [i]) {

      std::cout << "Искомый элемент найден. Позиция: " << numVec << std::endl;


      return 0;

    }

  }


  std::cout << "Искомый элемент не найден с позицией: " << numVec << "!\n";


  return 0;

}




int uniformBinarySearchMatrix (std::vector <std::vector <int>> &matrix) {

  int searchElem;


  std::cout << "Задайте искомый элемент" << std::endl;
  std::cin >> searchElem;


  for (int i = 0; i < matrix. size (); i++) {

    uniformBinarySearch (matrix [i], 0, matrix [i]. size () - 1, i + 1, searchElem);

  }


  return 0;

}




}
