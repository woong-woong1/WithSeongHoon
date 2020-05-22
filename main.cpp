#include "header.hpp"

int main()
{
  while(true)
  {
    system("clear");
    cout << endl << "Go WoongChan!!" << endl;
    cout << "[1] IDno" << endl;
    cout << "[2] Age" << endl;
    cout << "[3] Sex" << endl;
    cout << "[4] Exit This Program" << endl;
    cout << endl << "Your Choice? : ";

    int choice;
    cin >> choice;

    if(choice==1)
      IDno();
    else if(choice==2)
      age();
    else if(choice==3)
      sex(); 
    else if(choice==4)
      return 0;
    else
      cout << endl << endl << "You can choose only in 1~4.";
  }

  return 0;
}


