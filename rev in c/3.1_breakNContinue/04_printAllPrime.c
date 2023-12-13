#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a and b :");
    scanf("%d %d", &a, &b);
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
            printf("%d ", num);
        }
    }
    return 0;
}
