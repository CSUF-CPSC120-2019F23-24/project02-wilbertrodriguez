// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>
//so I can use setw(#)

int main()
{

  std::cout << "Welcome to the Business Trip Tracker!\n\n";

  int days;
  double hotel_exp,meal_exp,total_exp;
  std::string location;
  //sets up the variables

  std::cout << "What is the buisness trip location? ";
  std::string str = location;
  std::cout << str.substr (0,20) << std::endl;
  std::cin >> location;
  //obtains the location using a string type

  std::cout << "How many days will the trip take? ";
  std::cin >> days;
  //obtains the amount of days on a trip

  std::cout << "What is the total hotel expense? ";
  std::cin >> hotel_exp;
  //obtains the hotel expenses for the trip

  std::cout << "What is the total meal expense? ";
  std::cin >> meal_exp;
  //obtains the meal expenses for the trip

  std::cout << "Location" << std::setw(12) << "Days" << std::setw(13)
  << "Hotel" << std::setw(12) << "Meal" << std::setw(13) << "Total\n";
  //Puts the data into the desired format

  total_exp = hotel_exp + meal_exp;
  //calculates the total expenses for the trip

  std::cout << location << std::setw(14) << days << std::setw(7) << '$' << hotel_exp << std::setw(6) << '$' << meal_exp << std::setw(6) << '$' << total_exp <<"\n";
  //puts the data below the previous names returned

  return 0;
}
