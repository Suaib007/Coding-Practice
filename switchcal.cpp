#include <iostream>
using namespace std;

int main()
{
   float a, b;
   cout << "Enter two numbers: " << endl;
   cin >> a >> b;

   int op;
   cout << "What operation you want to do?" << endl;
   cin >> op;

   float ans = 0;

   switch (op)
   {
   case 1:
      cout << "Add Case" << endl;
      ans = a + b;
      break;
   case 2:
      cout << "Subtract Case" << endl;
      ans = a - b;
      break;
   case 3:
      cout << "Multiply Case" << endl;
      ans = a * b;
      break;
   case 4:
      cout << "Divide Case" << endl;
      ans = a / b;
      break;
   default:
      cout << "Invalid operation" << endl;
      return 0;
   }

   // if (op == 0)
   // {
   //    ans = a + b;
   // }
   // else if (op == 1)
   // {
   //    ans = a - b;
   // }
   // else if (op == 2)
   // {
   //    ans = a * b;
   // }
   // else if (op == 3)
   // {
   //    ans = a / b;
   // }
   // else
   // {
   //    cout << "Invalid operation";
   //    return 0;
   // }
   cout << "your answer is : " << ans << endl;
   return 0;
}