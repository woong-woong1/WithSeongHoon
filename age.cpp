#include "header.hpp"

void age()
{
  system("clear");
  cout << "You Chose age." << endl
       << "Insert your Age : ";

  int number;
  cin >> number;

  string IDnumber = (0<number && number<9999999) ? "Beautiful!!!" : "Please type correctly.";
  cout << IDnumber << endl;

  char again;
  cout << endl << "Go Back? (Y/N) : ";
  cin >> again;

  if(again=='Y'||again=='y')
    return;
  else
    age();

  return;
}
