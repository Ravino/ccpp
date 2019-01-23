#include <iostream>
#include <vector>

#include "matrix.hpp"




int main () {

  std::vector <std::vector <int>> matrix;


  while (true) {

    int resMenu = matrixlib::menu ();


    if (resMenu == 1) {

      std::cout << "\n\nСчитывание матрицы из файла\n\n";
      matrix = matrixlib::readMatrix ();
      break;

    }


    if (resMenu == 2) {

      std::cout << "Создание матрицы\n";
      matrix = matrixlib::createMatrix ();
      break;

    }


    if (resMenu == 0) {

      std::cout << "\n\n Выход \n\n";
      exit (0);

    }

  }


  std::cout << "Вывод исходной матрицы\n";
  int resBaseMatrix = matrixlib::printMatrix (matrix);


  std::vector <std::vector <int>> resMatrixTransporse = matrixlib::transpose (matrix);


std::cout << "\n\nВыполняется бинарный поиск" << std::endl;
int resBinarySearchMatrix = matrixlib::binarySearchMatrix (resMatrixTransporse);


std::cout << "\n\nВыполняется однородный бинарный поиск" << std::endl;
int resUniformBinarySearchMatrix = matrixlib::uniformBinarySearchMatrix (resMatrixTransporse);


  return 0;

}
