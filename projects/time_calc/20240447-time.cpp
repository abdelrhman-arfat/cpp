#include <iostream>

using namespace std;

/*
  1- عبد الرحمن ياسر احمد عرفات
  2- 20240447
  3- A8
*/

int main()
{
  int seconds;

  cout << "Enter the seconds: " << endl;

  cin >> seconds;

  // 1 year =
  int one_year = 365 * 24 * 60 * 60;

  int minutes = seconds / 60;
  int hours = minutes / 60;
  int days = hours / 24;
  int weeks = days / 7;
  int years = seconds / one_year;
  int months = years * 12;

  cout << "The Years are: " << years << endl;
  cout << "The months are: " << months << endl;
  cout << "The weeks are: " << weeks << endl;
  cout << "The days are: " << days << endl;
  cout << "The hours are: " << hours << endl;
  cout << "The minutes are: " << minutes << endl;
  cout << "The seconds are: " << seconds << endl;

  return 0;
}