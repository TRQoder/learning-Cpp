#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter Row and Columns :";
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j >= row - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}