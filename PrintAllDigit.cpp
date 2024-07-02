#include <iostream>
using namespace std;

void printAllDigit(int n)
{
   while (n)
   {
      int onesPlaceDigit = n % 10;
      cout << "Digit: " << onesPlaceDigit << endl;
      n = n / 10;
   }
}

int main()
{
   int n;
   cout << "Enter Number to see its digits: " << endl;
   cin >> n;

   printAllDigit(n);
}