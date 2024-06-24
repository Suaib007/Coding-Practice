#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "Enter number of elements: ";
   cin >> n;
   int lastRowStarCount = 0;
   for (int row = 0; row < n; row++)
   {
      for (int col = 0; col < n - row - 1; col++)
      {
         cout << " ";
      }

      if (row == n - 1)
      {
         lastRowStarCount = 2 * row + 1;
      }
      for (int col = 0; col < 2 * row + 1; col++)
      {
         cout << "*";
      }
      cout << endl;
   }
   for (int row = 0; row < lastRowStarCount; ++row)
   {
      cout << "*";
   }
   cout << endl;

   return 0;
}