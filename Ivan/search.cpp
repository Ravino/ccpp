#include <iostream>
#include <vector>

#include "matrix.hpp"




int main () {

  std::cout << "Создание матрицы\n";
  std::vector <std::vector <int>> matrix = matrixlib::createMatrix ();


  std::cout << "Вывод исходной матрицы\n";
  int resBaseMatrix = matrixlib::printMatrix (matrix);


  std::cout << "\n\nТранспонирование матрицы\n";
  std::vector <std::vector <int>> resMatrixTransporse = matrixlib::transpose (matrix);



  std::cout << "\n\nСортировка столбцов матрицы\n";
  int resSortRowMatrix = matrixlib::sortRowMatrix (resMatrixTransporse);


std::cout << "\n\nВыполняется бинарный поиск" << std::endl;
int resBinarySearchMatrix = matrixlib::binarySearchMatrix (resMatrixTransporse);


std::cout << "\n\nВыполняется однородный бинарный поиск" << std::endl;
int resUniformBinarySearchMatrix = matrixlib::uniformBinarySearchMatrix (resMatrixTransporse);


  return 0;

}
