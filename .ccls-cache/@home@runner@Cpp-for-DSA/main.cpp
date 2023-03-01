#include <iostream>
using namespace std;


  void add(int a, int b) {
    cout<<"Sum of "<< a << " and " << b << " is : "<< a+b << endl;
  }
  void subtract(int a, int b) {
    cout<<"Subtraction of "<< a << " and " << b << " is : "<< a-b << endl;
  }
  void product(int a, int b) {
    cout<<"Product of "<< a << " and " << b << " is : "<< a*b << endl;
  }
  void Divide(int a, int b) {
    cout<<"Division of "<< a << " and " << b << " is : "<< a/b << endl;
  }


int main() {

  cout << "W\tE\tL\tC\tO\tM\tE\tTO\tMY\tCALCULATOR\n" << endl;
  cout << "----------------------------------------------------" << endl;
  // variable declaration
  int option, num1, num2;
  bool live = true;
 
 while(live) {
    cout << "What Operation do you want ? \n\nYour options are :" << endl;
  cout << "For Addition Enter 1" << endl << "For Subtraction Enter 2" << endl ;
  cout << "For Multiplication Enter 3" << endl << "For Division Enter 4" << endl ;
  cout <<  "To Quit Enter 0" << endl;
  cout << "Enter Option No : ";
  cin >> option;
  cout << endl;
  switch (option) {
    case 1 : 
           cout << "Ok! You chose Addition"<< endl;
           cout << "Enter Your Numbers num1 and num2" << endl;
           cout << "num1 : ";
             cin >> num1;
           cout << "num2 : ";
             cin >> num2;
           add(num1,  num2);
           cout << endl << endl;
           break;
    case 2 : 
           cout << "Ok! You chose Subtraction"<< endl;
           cout << "Enter Your Numbers num1 and num2" << endl;
           cout << "num1 : ";
             cin >> num1;
           cout << "num2 : ";
             cin >> num2;
           subtract(num1,  num2);
           cout << endl << endl;
           break;
           break;
    case 3 : 
           cout << "Ok! You chose Multiplication"<< endl;
           cout << "Enter Your Numbers num1 and num2" << endl;
           cout << "num1 : ";
             cin >> num1;
           cout << "num2 : ";
             cin >> num2;
           product(num1,  num2);
           cout << endl << endl;
           break;
           break;
    case 4 :
           cout << "Ok! You chose Division"<< endl;
           cout << "Enter Your Numbers num1 and num2" << endl;
           cout << "num1 : ";
             cin >> num1;
           cout << "num2 : ";
             cin >> num2;
           Divide(num1,  num2);
           cout << endl << endl;
           break;
           break;
    case 0 : 
           cout << "Ok, Bye!!"<< endl;
           cout << "This is from Abdullah" << endl;
           live = false;
           break;
    default:
           cout << "Oops! something went Wrong"<< endl;
           cout << "---You must input Something wrong let me check...\nOh!! Enter number                from 0 to 4 \ntry again .....\n\n!! Note :- Want to Quit Enter 0\n\n";
  }
 }
    
  return 0;
}