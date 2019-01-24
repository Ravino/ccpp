#include <iostream>
#include <gtest/gtest.h>


#include "src/vector.cpp"




int main () {

  Vector vector;




TEST (vectorTests, pushTest) {

  ASSERT_EQ (vector. push (1), 0);

}




TEST (vectorTests, popTest) {

  ASSERT_EQ (vector. pop (), 0);

}




TEST (vectorTests, printTest) {

  ASSERT_EQ (vector. print (), 0);

}




TEST (vectorTests, lenTest) {

  ASSERT_EQ (vector. len (), 0);

}


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
