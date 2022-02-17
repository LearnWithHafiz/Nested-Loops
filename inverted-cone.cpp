#include <iostream>
using namespace std;

int main ()
{
    int number_of_rows = 5;
    // *****
    // ****
    // ***
    // **
    // *
    for (int row = 0; row < number_of_rows; row++)
    {
        cout << row << ": ";
        for (int column = row; column < number_of_rows; column++)
        {
           cout << "*";
        }
        cout << endl;
    }
    // *****
    //  ****
    //   ***
    //    **
    //     *
    for (int row = 0; row < number_of_rows; row++)
    {
        cout << row << ": ";
        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }
        for (int column = row; column < number_of_rows; column++)
        {
           cout << "*";
        }
        cout << endl;
    }
    for (int row = 0; row < number_of_rows; row++)
    {
        cout << row << ": ";
        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }
        for (int column = row; column < number_of_rows; column++)
        {
           cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < number_of_rows; row++)
    {
        cout << row << ": ";
        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }
        for (int column = row; column < number_of_rows; column++)
        {
            if (column == row || column == number_of_rows - 1 || row == 0)
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