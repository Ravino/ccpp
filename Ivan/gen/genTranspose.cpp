int swap (std:: vector <std:: string> &vec, int i, int j) {

  std:: string s = vec [i];


  vec [i] = vec [j];
  vec [j] = s;


  return 0;

}




bool nextSet (std:: vector <std:: string> &vec, int n) {


  int j = n - 2;


  while (j != -1 && vec [j] >= vec [j + 1]) j--;


  if (j == -1) {

    return false; // больше перестановок нет

  }


  int k = n - 1;


  while (vec [j] >= vec [k]) k--;


  swap (vec, j, k);


  int l = j + 1, r = n - 1;


  while (l < r) {

    swap(vec, l++, r--);

  }


  return true;

}
