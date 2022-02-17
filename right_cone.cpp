#include <iostream>
using namespace std;

int main ()
{
    int number_of_rows = 10;
    //     *
    //    **
    //   ***
    //  ****
    // *****
    // cout << "    *" << endl;
    // cout << "   **" << endl;
    // cout << "  ***" << endl;
    // cout << " ****" << endl;
    // cout << "*****" << endl;
   for (int row = 0; row < number_of_rows; row++)
    {
        cout << row << ": ";
        for (int space = row; space < number_of_rows - 1; space++)
        {
            cout << " ";
        }
        for (int column = 0; column <= row; column++)
        {
            cout << "*";

        }
        cout << endl;
    }
}