#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>



struct Node {
   int x;
   Node *l, *r;
};


void show (Node *&Tree) {
  if (Tree != NULL) {
    show (Tree -> l);
    std::cout << Tree -> x << '\t';
    show (Tree -> r);
  }
}


void del (Node *&Tree) {
  if (Tree != NULL) {
    del (Tree -> l);
    del (Tree -> r);

    delete Tree;
    Tree = NULL;
  }
}


void addNode (int x, Node *&MyTree) {
  if (NULL == MyTree) {
    MyTree = new Node;
    MyTree -> x = x;
    MyTree -> l = MyTree -> r = NULL;
  }

  if (x < MyTree -> x) {
    if (MyTree -> l != NULL) addNode (x, MyTree -> l);
    else {
      MyTree -> l = new Node;
      MyTree -> l -> l = MyTree -> l -> r = NULL;
      MyTree -> l -> x = x;
    }
  }

  if (x > MyTree -> x) {
    if (MyTree -> r != NULL) addNode (x, MyTree -> r);
    else {
      MyTree -> r = new Node;
      MyTree -> r -> l = MyTree -> r -> r = NULL;
      MyTree -> r -> x = x;
    }
  }
}


int main () {

  Node *Tree = NULL;

  for (int i = 5; i > 0; i--) addNode (i, Tree);

  show (Tree);
  std::cout << '\n';

  del (Tree);


  for (int i = 20; i > 5; i--) addNode (i, Tree);

  show (Tree);

  del (Tree);

  return 0;
}
