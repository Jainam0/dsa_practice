#include<iostream>  // preprocessor directive
using namespace std;

int main()
{
  int a = 10;
  int marks = -200;
  char grade = 'A';
  bool isAdult = true;
  float cgpa = 8.9;
  double price = 99.99;

  cout<<a<<" "<<marks<<" "<<grade<<" "<<isAdult<<" "<<cgpa<<endl;
  // cout <<"Apna \nCollege"<<endl<<"hello";
  cout << "\nsize of int :" <<sizeof(a)<<endl;
  cout << "\nsize of char:" <<sizeof(grade)<<endl;
  cout << "\nsize of bool:" <<sizeof(isAdult)<<endl;
  cout << "\nsize of float:" <<sizeof(cgpa)<<endl;
  cout << "\nsize of double:" <<sizeof(price)<<endl;
  return 0;
}