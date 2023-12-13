#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number :";
    cin >> num;
    if (num % 2 == 0 && num % 3 == 0)
    {
        cout << "Divisible by Both 2 and 3";
    }
    else if (num % 2 == 0)
    {
        cout << "Divisible by only 2";
    }
    else if (num % 3 == 0)
    {
        cout << "Divisible by only 3";
    }
    else
    {
        cout << "Divisible by none";
    }

    return 0;
}