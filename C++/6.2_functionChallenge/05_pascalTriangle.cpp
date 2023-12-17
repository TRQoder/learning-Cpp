#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int ncr(int n, int r)
{
    int nCr = factorial(n) / (factorial(n - r) * factorial(r));
    return nCr;
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
