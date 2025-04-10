#include <iostream>

using namespace std;

int main()
{
  int number;
  cin >> number;

  for (int i = 1; i < 11; i++)
  {
    cout << number << " x " << i << " = " << number * i << endl;
  }
}
