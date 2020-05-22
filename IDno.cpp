#include "header.hpp"

void IDno()
{
  system("clear");
  cout << "You Chose IDno." << endl
       << "Insert your ID number : ";

  int number;
  cin >> number;

  string IDnumber = (0<number && number<9999999) ? "How nice number!!!" : "Please type correctly.";
  cout << IDnumber << endl;

  char again;
  cout << endl << "Go Back? (Y/N) : ";
  cin >> again;

  if(again=='Y'||again=='y')
    return;
  else
    IDno();

  return;
}
