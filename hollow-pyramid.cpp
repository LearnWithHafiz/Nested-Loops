#include <iostream>
using namespace std;

int main ()
{
    int number_of_rows = 5;
    //     *
    //    * *
    //   *   *
    //  *     *
    // * * * * *
   for (int row = 0; row < number_of_rows; row++)
    {
        cout << row << ": ";
        for (int space = row; space < number_of_rows - 1; space++)
        {
            cout << " ";
        }
        for (int column = 0; column <= row; column++)
        {
            if (column == 0 || column == row || row == number_of_rows - 1)
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
}