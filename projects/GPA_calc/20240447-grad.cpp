#include <iostream>
using namespace std;
/*
  1- عبد الرحمن ياسر احمد عرفات
  2- 20240447
  3- A8
*/
int main()
{
  // Grading system
  // 1- take the degree :
  int degree;
  cout << "Write your degree " << endl;
  cin >> degree;
  /*
  90 ~ 100 -> A
  80 ~ 89 -> B
  70 ~ 79 -> C
  60 ~ 69 -> D
  less than 60 -> F
  */

  if (degree > 100)
  {
    cout << "You Input wrong value please try again ,Value should be between 0 ~ 100 \n";
    return main(); // if the input is wrong value return the func again :
  }

  if (degree >= 90)
  {
    cout << "Your grad the A" << endl;
    return 0;
  }
  else if (degree >= 80)
  {
    cout << "Your grad is B" << endl;
    return 0;
  }
  else if (degree >= 70)
  {
    cout << "Your grad is C" << endl;
    return 0;
  }
  else if (degree >= 60)
  {
    cout << "your grad is D" << endl;
    return 0;
  }
  else
  {
    cout << "Your grad is F" << endl;
    return 0;
  }
}