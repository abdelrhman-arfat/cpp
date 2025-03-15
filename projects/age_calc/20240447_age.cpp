#include <iostream>
using namespace std;

/*
  1- عبد الرحمن ياسر احمد عرفات
  2- 20240447
  3- A8
*/

int main()
{
  int age;
  cout << "What is the year which you born on it: ";
  cin >> age;
  int currentYear = 2025;
  if (age > currentYear)
  {
    cout << "The age is not valid it should be less than " << currentYear << "." << endl;
    return 0;
  }

  int years = currentYear - age;
  cout << "You are " << years << " old" << endl;

  int months = years * 12;
  cout << "You are " << months << " months old" << endl;

  // ignore using months * 30 because there are months with 28 or 29 or 30 or 31 days
  int days = years * 365;
  cout << "You are " << days << " days old" << endl;

  int hours = days * 24;
  cout << "You are " << hours << " hours old" << endl;

  int minutes = hours * 60;
  cout << "You are " << minutes << " minutes old" << endl;

  int seconds = minutes * 60;
  cout << "You are " << seconds << " seconds old" << endl;

  return 0;
}
