#include <iostream>



class Vector {

  int length = 0;
  int backLength = 0;

  int *vector = new int [8];




  int nextCopy () {

    int newLength = length * 2;

    int *newVector = new int [newLength];


    backLength = length;


    for (int i = 0; i < length; i++) {

      newVector [i] = vector [i];

    }


    *vector = *newVector;


delete [] newVector;


    return 0;

  }




  int backCopy () {

    int newLength = length / 2;

    int *newVector = new int [newLength];


    backLength = newLength;


    for (int i = 0; i < newLength; i++) {

      newVector [i] = vector [i];

    }


    *vector = *newVector;


delete [] newVector;


    return 0;

  }




  public:

  int push (int elem) {

    if (length == 0) {

      vector = new int [8];

    }


    if (length == 8) {

      nextCopy ();

    }


    vector [length] = elem;


    length = length + 1;


    return 0;

  }




  int pop () {

    if ((length - 1) < 0) {

      vector = NULL;


      return 0;

    }


    if (length == backLength) {

      backCopy ();

    }


    length = length - 1;


    int elem = vector [length];


    vector [length] = 0;


    return elem;

  }




  int print () {

    if (length == 0) {

      return 0;

    }


    for (int i = 0; i < length; i++) {

      std::cout << vector [i] << "\n";

    }


    return 0;

  }




  int len () {

    std::cout << "\n\nДлинна вектора: " << length << "\n";


    return length;

  }

};




int main () {


  Vector vector;


  vector. len ();
  vector. print ();


  for (int i = 0; i < 10; i++) {

    vector. push (i + 1);

  }


  vector. len ();
  vector. print ();


  for (int i = 0; i < 5; i++) {

    vector. pop ();

  }


  vector. len ();
  vector. print ();


  for (int i = 0; i < 5; i++) {

    vector. pop ();

  }


  vector. len ();
  vector. print ();


  for (int i = 0; i < 15; i++) {

    vector. push (i + 1);

  }


  vector. len ();
  vector. print ();


  return 0;

}
