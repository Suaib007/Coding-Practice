#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;

   for (int row = 0; row < n; row++)
   {
      char ch;
      for (int col = 0; col < row + 1; col++)
      {
         int number = col + 1;
         ch = number + 'A' - 1;
         cout << ch;
      }

      for (char alphabet = ch; alphabet > 'A';)
      {
         alphabet = alphabet - 1;
         cout << alphabet;
      }
      cout << endl;
   }
}