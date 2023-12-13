#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter :";
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "It is a Composite number";
            break;
        }
    }
    if (i == n)
    {
        cout << "It is a Prime Number";
    }

    return 0;
}
