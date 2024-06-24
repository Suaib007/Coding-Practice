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

// int printMaximumNumber(int num1, int num2, int num3)
// {
//    int ans1 = max(num1, num2);
//    int finalAns = max(ans1, num3);
// cout << "Maximum number is: " << finalAns << endl;
// return finalAns;
// }

void printCounting(int n)
{
   for (int i = 1; i <= n; i++)
   {
      cout << i << endl;
   }
}

void checkEvenOdd(int num)
{
   if (num % 2 == 0)
   {
      cout << "Even Number" << endl;
   }
   else
   {
      cout << "Odd Number" << endl;
   }
}

void findSumUptoN(int n)
{
   int sum = 0;
   for (int i = 0; i <= n; i++)
   {
      sum += i;
   }
   cout << "Final Sum : " << sum << endl;
}

void findSumEvenUptoN(int n)
{
   int sum = 0;
   for (int i = 2; i <= n; i + 2)
   {
      sum += i;
   }
   cout << "Final Sum : " << sum << endl;
}

int main()
{
   // printLine();
   // printMaximum(80, 760, 90);
   // int maximum = printMaximumNumber(81, 76, 90);
   // cout << "Maximum is :" << maximum << endl;
   // printCounting(10);
   // checkEvenOdd(101);
   // findSumUptoN(10);
   findSumEvenUptoN(10);
   return 0;
}