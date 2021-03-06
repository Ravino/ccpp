// Функция Шейкер-сортировки


namespace sorts {


int countShekerPermutation = 0;
int countShekerEqu = 0;


int countTwoPathPermutation = 0;
int countTwoPathEqu = 0;







int menu () {

  std::cout << "\n\n 1. Считать из файла \n\n";

  std::cout << "\n\n 2. Ввести руками \n\n";
  
  std::cout << "\n\n 3. Сгенерировать рандомно \n\n";

  std::cout << "0 или любое другое значение кроме чисел. Выход \n\n";


  return 0;

}




int sheker (std::vector <int> &vec) {

  // левая и правая границы сортируемой области массива

  int count = vec. size ();

  int left = 0;
  int right = count - 1;


  // флаг наличия перемещений

  int flag = 1;


  // Выполнение цикла пока левая граница не сойдётся с правой
  // или пока в массиве имеются перемещения

  while ((left < right)  &&  flag > 0) {

    flag = 0;


    for (int i = left;  i < right;  i++) {

countShekerEqu++;


      // если следующий элемент меньше текущего, меняем их местами

      if (vec [i] > vec [i + 1]) {

        int t = vec [i];

        countShekerPermutation++;


        vec [i] = vec [i + 1];

        vec [i + 1] = t;


        //Указываем на перемещения в этом цикле

        flag = 1;

      }

    }


    //Сдвиг правой границы на один элемент в лево
    right--;


    //Цикл движения с права на лево

    for (int i = right;  i > left;  i--) {


countShekerEqu++;


      // если предыдущий элемент больше текущего, меняем их местами

      if (vec [i - 1] > vec [i]) {

        int t = vec [i];

        countShekerPermutation++;


        vec [i] = vec [i - 1];

        vec [i - 1] = t;


        //Указываем на перемещения в этом цикле

        flag = 1;

      }

    }


    //Сдвиг левой границы вправо на один элемент

    left++;

  }


  return 0;

}




int print (std::vector <int> vec) {

  for (int i = 0;  i < vec. size ();  i++) {

    std::cout <<"\n" << vec [i];

  }


  return 0;

}




int genRand () {

  int clockTime = std::clock ();


  std::default_random_engine engine {clockTime};


  return 1 + engine () % 1000000;

}




std::vector <int> createRandomVector () {

  std::vector <int> vec;

  int sizeVec;


  std::cout << "\n\nВведите размерность массива\n\n";

  std::cin >> sizeVec;


  for (int i = 0;  i < sizeVec;  i++) {

    vec. push_back (genRand ());

  }


  return vec;

}




std::vector <int> createArmVector () {

  std::vector <int> vec;

  int sizeVec;


  std::cout << "\n\nВведите размерность массива\n\n";

  std::cin >> sizeVec;


  std::cout << "\n\nЗаполните массив \n\n";


  for (int i = 0;  i < sizeVec;  i++) {

    int item;


    std::cout << "\nЯчейка " << (i + 1) << " из " << sizeVec << "\n";


    std::cin >> item;


    vec. push_back (item);

  }


  return vec;

}



std::vector <int> createReadVector () {

  std::vector <int> vec;

  std::ifstream dataFile ("./dataVector.txt");


  while (dataFile) {

    std::string str;


    std::getline (dataFile, str);


    if (str != "\0") {

      vec. push_back (std::stoi (str));

    }

  }


  return vec;

}


int twoPath (std::vector <int> &vec) {


  int i;

  int j;

  int k;

  int t;


  std::vector <int> veck = vec;
  for (k = vec. size () / 2;  k > 0;  k /= 2) {

    for (i = k;  i < vec.size ();  i++) {

      t = vec [i];


      for (j = i;  j >= k;  j -= k) {

        if (t > vec [j - k]) {

countTwoPathEqu++;

          break;

        }


        vec [j] = vec [j - k];

countTwoPathPermutation++;

      }


      vec [j] = t;


countTwoPathPermutation++;

    }

  }


  return 0;

}




}
