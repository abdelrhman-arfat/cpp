#include <iostream>
using namespace std;

/*
  1- عبد الرحمن ياسر احمد عرفات
  2- 20240447
  3- A8
*/

int main()
{
  int num1, num2, num3;
  cout << "Write the numbers" << endl;
  cin >> num1;
  cin >> num2;
  cin >> num3;

  // check number ->

  if (num1 >= num2 && num1 >= num3)
  { // if num1 is the biggest
    cout << num1 << " is the biggest number" << endl;
    return 0;
  }
  else if (num2 >= num1 && num2 >= num3)
  { // num2 is the biggest number
    cout << num2 << " is the biggest number" << endl;
    return 0;
  }
  else
  {
    cout << num3 << " is the biggest number" << endl;
    return 0;
  }
}
