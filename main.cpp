// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>
#include <sstream>
//so I can use setw(#)

int main()
{

  std::cout << "Welcome to the Business Trip Tracker!\n\n";

  int days;
  double hotel_exp, meal_exp, total_exp;
  std::string location;
  std::stringstream sshotel, ssmeal, sstotal;
  //sets up the variables

  std::cout << "What is the buisness trip location? ";
  getline(std::cin, location);
  //obtains the location using a string type

  std::cout << "How many days will the trip take? ";
  std::cin >> days;
  //obtains the amount of days on a trip

  std::cout << "What is the total hotel expense? ";
  std::cin >> hotel_exp;
  sshotel << std::setprecision(2) << std::fixed << '$' << hotel_exp;
  //obtains the hotel expenses for the trip

  std::cout << "What is the total meal expense? ";
  std::cin >> meal_exp;
  ssmeal << std::setprecision(2) << std::fixed << '$' << meal_exp;
  //obtains the meal expenses for the trip

  std::cout << std::setw(20) << std::left << "Location" << std::setw(10) << std::right << "Days"
  << std::setw(10) << "Hotel" << std::setw(10) << "Meal" << std::setw(10) << "Total" << "\n";


  //Puts the data into the desired format

  total_exp = hotel_exp + meal_exp;
  sstotal << std::setprecision(2) << std::fixed << '$' << total_exp;
  //calculates the total expenses for the trip

  std::cout << std::setw(20) << std::left << location.substr(0,20) << std::setw(10) << std::right << days
  << std::setw(10) << sshotel.str() << std::setw(10) << ssmeal.str() << std::setw(10) << sstotal.str() << "\n";
  //puts the data below the previous names returned

  return 0;
}
