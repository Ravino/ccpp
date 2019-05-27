bool validateEquDoubleCharTranspose (std:: vector <std:: string> vec) {

  for (int i = 0; i < vec. size (); i++) {

    std:: string tmp = vec [i];


    for (int j = 0; j < vec. size (); j++) {


      if (i == j) {

        continue;

      }


      if (tmp == vec [j]) {

        return false;

      }

    }

  }


  return true;

}
