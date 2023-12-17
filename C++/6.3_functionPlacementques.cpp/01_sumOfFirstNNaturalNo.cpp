#include <iostream>
using namespace std;
int sum(int n)
{
    int sum = (n * (n + 1)) / 2;
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
