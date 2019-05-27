bool validateEquCharTransposes (std:: vector <std:: string> &vec, std:: vector <std:: string> &middle) {

  bool flag = false;


  for (int i = 0; i < vec. size (); i++) {

    std:: string tmp = vec [i];


    for (int j = 0; j < middle. size (); j++) {

      if (tmp == middle [j]) {

        flag = true;


        break;

      }

    }


    if (!flag) {

      return false;

    }

  }


  return true;

}
