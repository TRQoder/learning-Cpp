#include <stdio.h>

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
        printf("Today's Date is %d .Go out Today\n", date);
        pocketMoney -= 300;
    }

    return 0;
}
