or (int row = 0; row < n; row++)
   {

      // space

      for (int col = 0; col < row; col++)
      {
         cout << " ";
      }

      // star
      int totalCol = n - row;
      for (int col = 0; col < totalCol; col++)
      {
         if (col == 0 || col == totalCol - 1)
         {
            cout << "* ";
         }
         else
         {
            cout << "  ";
         }
      }
      cout << endl;
   }