#include <iostream>
using namespace std;

int main()
{
  int number, sum = 0;
  cout << "Enter the digit: ";
  cin >> number;

  if (number < 1)
  {
    cout << "this isn't a positive number" << endl;
    return main();
  }

  while (number > 0)
  {
    sum += number % 10;
    number /= 10;
  }

  cout << "sum:" << sum << endl;
  return 0;
}