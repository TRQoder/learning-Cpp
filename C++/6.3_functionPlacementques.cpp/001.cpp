#include <iostream>
using namespace std;
int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int ans = sum(n);
    cout << ans;
    return 0;
}
