bool searchEquTranspose (std:: vector <int> &vec, std:: vector <int> &middle) {

  for (int i = 0; i < vec. size (); i++) {


    if (vec [i] == middle [i]) {

      continue;

    }


    return false;

  }


  return true;

};
