// Extract last digit
//  1 ,2,4,8..
#include <iostream>
#include <cmath>

using namespace std;
int binaryToDecimal1(int n)
{
    int i = 0;
    int ans = 0;
    while (n > 0)
    {
        int ld = n % 10;
        ans = ans + (ld * pow(2, i));
        n = n / 10;
        i++;
    }
    return ans;
}
int binaryToDecimal2(int n){
    int ld;
    int p =1;
    int sum =0;

    while(n>0)
    {
        ld = n %10;
        sum += ld * p;
        p *= 2;
        n /= 10; 
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int originaln=n;
    int numChecker[10];
    int i =0;
    while (n>0)
    {
        int ld = n%10;
        numChecker[i] = ld;
        n = n/10;
        i++;
    }
    // cout<<numChecker[1];
    int flag =0;
    for(int i=0; i<10;i++){
        if(numChecker[i] == 1 || numChecker[i] == 0   ){
                flag = 1;
              break;
        }
        
    
    }
    if(flag == 1){
         cout << binaryToDecimal2(originaln) << endl;
    }else{
        cout<<"Enter 0 &1 only";
    }

   

    return 0;
}
