#include <iostream>
#include <vector>




int printMatrix (std::vector <std::vector <int>> &matrix) {

  std::cout << "Печать матрицы" << std::endl;


  for (int i = 0; i < matrix. size (); i++) {

    std::cout << std::endl << "Строка: " << i << std::endl;


    for (int j = 0; j < matrix [i]. size (); j++) {

      std::cout << j << " ";

    }

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




std::vector <std::vector <int>> evenOdd (std::vector <std::vector <int>> matrix) {

  std::vector <std::vector <int>> newMatrix;

  std::vector <std::vector <int>> even;
  std::vector <std::vector <int>> odd;


  for (int i = 0; i <= matrix. size (); i = i+2) {

    even. push_back (matrix [i]);

  }


  for (int i = 1; i <= matrix. size (); i = i+2) {

    odd. push_back (matrix [i]);

  }


  for (int i = 0; i < matrix. size (); i++) {

    newMatrix. push_back (odd [i]);
    newMatrix. push_back (even [i]);

  }


  return newMatrix;

}





int main () {

  std::vector <std::vector <int>> matrix = createMatrix ();
  printMatrix (matrix);


    std::vector <std::vector <int>> evenOddMatrix (matrix);
    printMatrix (evenOddMatrix);


  return 0;

}
