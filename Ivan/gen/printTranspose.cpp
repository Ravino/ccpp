int printTranspose (std:: vector <std:: string> vec, std:: vector <std:: string> &vecs, int n) {

  static int num = 1;


  std:: cout.width(3);
  std:: cout << num++ << ": ";


  if (num == 19) vec = vecs;


  for (int i = 0; i < n; i++) {

    std:: cout << vec [i] << " ";

  }


  std:: cout << std:: endl;


  return 0;

}



