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
    int n, r, nCr;
    cout << "Enter n r of nCr :";
    cin >> n >> r;
    nCr = ncr(n, r);
    cout << "nCr :" << nCr;
    return 0;
}
