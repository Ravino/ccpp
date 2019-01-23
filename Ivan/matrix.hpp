#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>



namespace matrixlib {




int searchIndexElem (std::vector <int> vec, int elem) {

  for (int i = 0; i <= vec. size (); i++) {

    if (vec [i] == elem) {

      return i + 1;

    }

  }


  return 0;

}




int menu () {

  std::cout << "\n\nАктивируйте нужный пункт меню\n\n";

  std::cout << "\n 1. Считать матрицу из файла\n";

  std::cout << "\n 2. Создать матрицу руками\n";


  std::cout << "\n 0. Выход \n";


  int item;


  std::cin >> item;


  return item;

}




std::vector <std::vector <int>> readMatrix () {

  std::vector <std::vector <int>> matrix;

  std::ifstream dataFile ("./dataMatrix.txt");


  while (dataFile) {

    std::stringstream ss;

    std::vector <int> vec;

    std::string str;
    std::string tok;


    std::getline (dataFile, str);


    ss << str;


    while (std::getline (ss, tok, ',')) {

      vec. push_back (std::stoi (tok));

    }


    matrix. push_back (vec);

  }


  matrix. pop_back ();


  return matrix;

}




int verifyOrder (std::vector <int> &vec) {

  for (int i = 1; i < vec. size (); i++) {

    if (vec [i] < vec [i - 1]) {

      return 0;

    }

  }


  return 1;

}




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

  int elem;


  std::vector <std::vector <int>> matrix;


  std::cout << "Введите количество строк матрицы" << std::endl;
  std::cin >> row;


  std::cout << "Введите количество столбцов матрицы" << std::endl;
  std::cin >> column;


  matrix. resize (row);

  for (int i = 0; i < matrix. size (); i++) {

    matrix [i]. resize (column);

  }


  std::cout << "\n\nЗаполните матрицу\n";

  for (int i = 0; i < row; i++) {

    std::cout << "\n\nСтрока: " << i + 1 << "\n";


    for (int j = 0; j < column; j++) {

      std::cout << "\n\nСтолбец: " << j + 1 << "\n";


      std::cin >> elem;


      matrix [i] [j] = elem;


      std::cout << "\n\nЗначение на пересечении строки " << i + 1 << " и столбца " << j + 1 << " равняется " << elem << "\n";


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

    std::cout << "Элемент найден с позицией: " << searchIndElem + 1 << std::endl;


  return 0;

  }


  std::cout << "Элемент не найден" << "!\n" << std::endl;


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

    if (verifyOrder (matrix [i]) == 0) {

      std::cout << "\n\nСтолбец с номером " << i + 1 << " не имеет сортировки\n\n";


      continue;

    }


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

    std::cout << "Искомый элемент найден! Позиция элемента : " << searchIndexElem (vec, searchElem) << std::endl;


    return 0;

  }



  if (searchElem == vec [doublSize]) {

    std::cout << "Искомый элемент найден. Позиция: " << searchIndexElem (vec, searchElem) << std::endl;


    return 0;

  }


  if (searchElem == vec [start]) {

    std::cout << "Искомый элемент найден. Позиция: " <<  searchIndexElem (vec, searchElem) << std::endl;


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

      std::cout << "Искомый элемент найден. Позиция: " << searchIndexElem (vec, searchElem) << std::endl;


      return 0;

    }

  }


  std::cout << "Искомый элемент не найден!\n";


  return 0;

}




int uniformBinarySearchMatrix (std::vector <std::vector <int>> &matrix) {

  int searchElem;


  std::cout << "Задайте искомый элемент" << std::endl;
  std::cin >> searchElem;


  for (int i = 0; i < matrix. size (); i++) {

    if (verifyOrder (matrix [i]) == 0) {

      std::cout << "\n\nСтолбец с номером " << i + 1 << " не имеет сортировки\n\n";


      continue;

    }


    uniformBinarySearch (matrix [i], 0, matrix [i]. size () - 1, i + 1, searchElem);

  }


  return 0;

}




}
