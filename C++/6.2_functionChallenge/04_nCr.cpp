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
int main()
{
    int n, r;
    double nCr;
    cout << "Enter n and r of nCr :";
    cin >> n >> r;
    nCr = factorial(n) / (factorial(n - r) * factorial(r));
    cout << "nCr :" << nCr << endl;
    return 0;
}