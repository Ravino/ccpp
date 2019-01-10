#include <iostream>
#include <vector>

#include "matrix.hpp"




int main () {
std::vector <std::vector <int>> matrix = matrixlib::createMatrix ();


std::vector <std::vector <int>> resMatrixTransporse = matrixlib::transpose (matrix);


std::cout << "Вывод исходной матрицы\n";


int resBaseMatrix = matrixlib::printMatrix (resMatrixTransporse);


int resSortRowMatrix = matrixlib::sortRowMatrix (matrix);


std::cout << "Выполняется бинарный поиск" << std::endl;
int resBinarySearchMatrix = matrixlib::binarySearchMatrix (matrix);


std::cout << "Выполняется однородный бинарный поиск" << std::endl;
int resUniformBinarySearchMatrix = matrixlib::uniformBinarySearchMatrix (matrix);




  return 0;
}
