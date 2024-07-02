#include <iostream>
using namespace std;

long long int fact(long long int n)
{
   long long int fact = 1;

   for (int factorial = 1; factorial <= n; factorial++)
   {
      fact = fact * factorial;
   }
   return fact;
}

int main()
{
   int n;
   cin >> n;
   long long int answer = fact(n);
   cout << "Factorial of " << n << " is " << answer << endl;
}