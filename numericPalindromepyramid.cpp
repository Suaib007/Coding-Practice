#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   // int k = n;

   // for (int row = 0; row < n; row++)
   // {
   //    int c = 1;
   //    for (int col = 0; col < k; col++)
   //    {
   //       if (col < n - row - 1)
   //       {
   //          cout << " ";
   //       }
   //       else if (col <= n - 1)
   //       {
   //          cout << c;
   //          c++;
   //       }
   //       else if (col == n)
   //       {
   //          c = c - 2;
   //          cout << c;
   //          c--;
   //       }
   //       else
   //       {
   //          cout << c;
   //          c--;
   //       }
   //    }
   //    k++;
   //    cout << endl;
   // }
   for (int row = 0; row < n; row++)
   {
      for (int col = 0; col < n - row - 1; col++)
      {
         cout << " ";
      }
      for (int col = 0; col < row + 1; col++)
      {
         cout << col + 1;
      }
      for (int col = 0; col < row; col++)
      {
         cout << row - col;
      }
      cout << endl;
   }
   // cout << endl;
}