#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a and b :";
    cin >> a >> b;
    for (int num = a; num <= b; num++)
    {
        int i;
        if (num > 1)
        {
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    break;
                }
            }
        }

        if (i == num)
        {
            cout << num << " ";
        }
    }
    return 0;
}