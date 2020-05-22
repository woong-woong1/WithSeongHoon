#include "header.hpp"

void sex()
{
  system("clear");
  cout << "You Chose Sex." << endl
       << "Insert your Sex : [M/F] ";

  char number;
  cin >> number;

  if(number=='M'||number=='m')
    cout << "Go Away!!";
  else if(number=='F'||number=='f')
    cout << "Welcome!!";
  else
    cout << "Please type correctly";


  char again;
  cout << endl << "Go Back? (Y/N) : ";
  cin >> again;

  if(again=='Y'||again=='y')
    return;
  else
    sex();

  return;
}
