#include <iostream>
#include <vector>

#include "matrix.hpp"




int main () {

  std::vector <std::vector <int>> matrix;


  int resMenu = matrixlib::menu ();


  if (resMenu == 1) {

    std::cout << "\n\nСчитывание матрицы из файла\n\n";
    matrix = matrixlib::readMatrix ();

  }


  if (resMenu == 2) {

    std::cout << "Создание матрицы\n";
    matrix = matrixlib::createMatrix ();

  }


  std::cout << "Вывод исходной матрицы\n";
  int resBaseMatrix = matrixlib::printMatrix (matrix);


  std::cout << "\n\nТранспонирование матрицы\n";
  std::vector <std::vector <int>> resMatrixTransporse = matrixlib::transpose (matrix);


matrixlib::printMatrix (resMatrixTransporse);



//  std::cout << "\n\nСортировка столбцов матрицы\n";
//  int resSortRowMatrix = matrixlib::sortRowMatrix (resMatrixTransporse);


std::cout << "\n\nВыполняется бинарный поиск" << std::endl;
int resBinarySearchMatrix = matrixlib::binarySearchMatrix (resMatrixTransporse);


std::cout << "\n\nВыполняется однородный бинарный поиск" << std::endl;
int resUniformBinarySearchMatrix = matrixlib::uniformBinarySearchMatrix (resMatrixTransporse);


  return 0;

}
