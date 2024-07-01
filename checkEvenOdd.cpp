#include <iostream>
using namespace std;

bool checkEven(int n)
{
   if (n % 2 == 0)
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main()
{
   int n;
   cin >> n;
   bool isEven = checkEven(n);

   if (isEven)
   {
      cout << "is Even number" << endl;
   }
   else
   {
      cout << "is Odd number" << endl;
   }
}