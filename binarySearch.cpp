int binarySearch (std::vector <int> &vec, int numRow, int searchElem) {


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






