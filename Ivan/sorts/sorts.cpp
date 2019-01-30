// Функция Шейкер-сортировки


namespace sorts {




int sheker (double *arr, int count) {

  // левая и правая границы сортируемой области массива

  int left = 0;
  int right = count - 1;


  // флаг наличия перемещений

  int flag = 1;


  // Выполнение цикла пока левая граница не сойдётся с правой
  // или пока в массиве имеются перемещения

  while ((left < right)  &&  flag > 0) {

    flag = 0;


    for (int i = left;  i < right;  i++) {

      // если следующий элемент меньше текущего, меняем их местами

      if (arr [i] > arr [i + 1]) {

        double t = arr [i];

        arr [i] = arr [i + 1];

        arr [i + 1] = t;


        //Указываем на перемещения в этом цикле

        flag = 1;

      }

    }


    //Сдвиг правой границы на один элемент в лево
    right--;


    //Цикл движения с права на лево

    for (int i = right;  i > left;  i--) {

      // если предыдущий элемент больше текущего, меняем их местами

      if (arr [i - 1] > arr [i]) {

        double t = arr [i];

        arr [i] = arr [i - 1];

        arr [i - 1] = t;


        //Указываем на перемещения в этом цикле

        flag = 1;

      }

    }


    //Сдвиг левой границы вправо на один элемент

    left++;

  }


  return 0;

}




int printArr (int *arr, int sizeArr) {

  for (int i = 0;  i < sizeArr;  i++) {

    std::cout <<"\n" << arr [i];

  }


  return 0;

}




int genRand () {

  int clockTime = std::clock ();


  std::default_random_engine engine {clockTime};


  return 1 + engine () % 1000000;

}




}
