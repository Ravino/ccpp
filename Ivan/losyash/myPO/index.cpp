#include <iostream>
#include <cstring>
#include <vector>


#include "./Structs.cpp"

#include "./Stadium.cpp"
#include "./Peoples.cpp"
#include "Tickets.cpp"

#include "./CheapTickets.cpp"
#include "./DearTickets.cpp"

#include "./CheapPlaces.cpp"
#include "./DearPlaces.cpp"

#include "./Fan.cpp"





int main () {

  CheapPlaces cheapPlaces;
  DearPlaces dearPlaces;


  CheapTickets cheapTickets;
  DearTickets dearTickets;


  Peoples peoples;
  Fan fan;




  std:: string name = "";
  std:: string lastName = "";


  std:: cout << "\n Введите своё имя \n";
  std:: cin >>name;


  std:: cout << "\n Введите свою фамилию \n";
  std:: cin >> lastName;


  bool resSetName = peoples. setName (name);
  bool resSetLastName = peoples. setLastName (lastName);

  int numberPeople = peoples. setPeoples ();


  std:: cout << "\n Ваш порядковый номер " << (numberPeople + 1) << " \n";


int typeTicket;


  std:: cout << "\n Отлично! Теперь купите билет. Укажите интересующий тип билета \n";
  std:: cout << "\n Эконом класс -- нажмите 1. Бизнес класс -- нажмите 2 \n";
  std:: cin >> typeTicket;


  std:: cout << "Вы взяли билет типа " << typeTicket;


  if (typeTicket == 1) {

    dearTickets. gen ();
    dearTickets. setTickets ();

  }


  cheapTickets. gen ();
  cheapTickets. setTickets ();


  


return 0;}
