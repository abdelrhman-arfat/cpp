#include <iostream>
#include <cmath>
using namespace std;

/*
  1- عبد الرحمن ياسر احمد عرفات
  2- 20240447
  3- A8
*/

int main()
{

  // We assume the triangle is abc
  // to calculate the triangle area -> use hero theory قاعدة هيرون
  /*
    perimeter is = ab + ab + ac
    half_perimeter  = s = perimeter / 2 ;
    area = (s * ( s - ab) * (s - bc) * (s - ac) ) power 0.5
    from Encyclopedia Britannica website: https://www.britannica.com/science/Herons-formula
    Area = Square root of√s(s - a)(s - b)(s - c)
  */
  int ab, bc, ac;
  cout << "Enter the length of side ab: ";
  cin >> ab;
  cout << "Enter the length of side bc: ";
  cin >> bc;
  cout << "Enter the length of side ac: ";
  cin >> ac;
  double s = (ab + ac + bc) / 2;
  // use sqrt to calculate ^ 0.5 (√)
  double area = sqrt(s * (s - ab) * (s - ac) * (s - bc));

  cout << "The area of the triangle is: " << area << endl;
  return 0;
}