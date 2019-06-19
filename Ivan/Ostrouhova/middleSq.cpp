#include <iostream>
#include <string>




int convertStrNumber (std:: string str) {

  char fio [3] = {str [0], str [1], str [2]};

  int f = (int) fio [0];
  int i = (int) fio [1];
  int o = (int) fio [2];


  std:: string strNumber = "";


  strNumber = strNumber + std:: to_string (f);
  strNumber = strNumber + std:: to_string (i);
  strNumber = strNumber + std:: to_string (o);


  int number = stoi (strNumber);


  return number;

}




long SQ (int number) {

  long result = number * number;


  return result;

}




int selectMiddleSQ (long numberSQ) {

  std:: string strNumberSQ = std:: to_string (numberSQ);


  char charMiddleNumberSQ [2] = {strNumberSQ [2], strNumberSQ [3]};


  std:: string strMiddleNumberSQ = (const char*) charMiddleNumberSQ;


  int result = stoi (strMiddleNumberSQ);


  return result;

}




int main () {

  int fio = convertStrNumber ("EVG");


  long numberSQ = SQ (fio);


  int middleNumberSQ = selectMiddleSQ (numberSQ);


  std:: cout << "\n" << middleNumberSQ << "\n";


  return 0;

}
