#include <iostream>
using namespace std;
int main()
{
    int pocketMoney = 3000;
    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue;
        }
        if (pocketMoney < 300)
        {
            break;
        }
        cout << "Today's Date is " << date << ".Go out Today" << endl;
        pocketMoney -= 300;
    }
    return 0;
}