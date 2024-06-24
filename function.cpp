#include <iostream>
using namespace std;

// void printLine()
// {
//    for (int i = 1; i <= 10; i++)
//    {
//       cout << "You will get job if you have consistency in study" << endl;
//    }
// }

// void printMaximum(int num1, int num2, int num3)
// {
//    if (num1 >= num2 && num1 >= num3)
//    {
//       cout << "Maximum number is: " << num1 << endl;
//    }
//    else if (num2 >= num1 && num2 >= num3)
//    {
//       cout << "Maximum number is: " << num2 << endl;
//    }
//    else
//    {
//       cout << "Maximum number is: " << num3 << endl;
//    }
// }

int printMaximumNumber(int num1, int num2, int num3)
{
   int ans1 = max(num1, num2);
   int finalAns = max(ans1, num3);
   // cout << "Maximum number is: " << finalAns << endl;
   return finalAns;
}

int main()
{
   // printLine();
   // printMaximum(80, 760, 90);
   int maximum = printMaximumNumber(81, 76, 90);
   cout << "Maximum is :" << maximum << endl;
   return 0;
}