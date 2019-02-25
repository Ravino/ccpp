#include <iostream>
#include <vector>




int interpolationSearch (std::vector <int> &vec, int searchElem) {

  int indItem = 0;
  int left = 0;
  int right = vec. size ();

  bool flagFound;


  for (flagFound = false; (vec [left] < searchElem) && (vec [right] > searchElem) && !flagFound; ) {

    indItem = left + ((searchElem - vec [left]) * (right - left)) / (vec [right] - vec [left]);


    if (vec [indItem] < searchElem) {

      left = indItem + 1;


      continue;

    }


    if (vec [indItem] > searchElem) {

      right = indItem - 1;


      continue;

    }


   flagFound = true;

  }


  if (vec [left] == searchElem) {

    std::cout << searchElem << " Искомый элемент найден в границе " << left <<  std::endl;


    return 0;

  }


  if (vec [right] == searchElem) {

    std::cout << searchElem << " Искомый элемент найден в границе " << right << std::endl;


    return 0;

  }


  std::cout << " Искомый элемент не найден " << std::endl;


  return 0;

}




int main () {

  std::vector <int> vec = { 1, 2, 4, 6, 7, 89, 123, 231, 1000, 1235 };


  int resultNone = interpolationSearch (vec, 89);


  return 0;

}
