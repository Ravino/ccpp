bool searchEquTranspose (std:: vector <std:: string> &vec, std:: vector <std:: string> &middle) {

  for (int i = 0; i < vec. size (); i++) {


    if (vec [i] == middle [i]) {

      continue;

    }


    return false;

  }


  return true;

};
