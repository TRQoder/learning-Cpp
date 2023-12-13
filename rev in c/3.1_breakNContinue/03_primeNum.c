#include <stdio.h>

int main()
{
    int n;
    printf("Enter :\n");
    scanf("%d", &n);
    int i;
    for ( i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("It is Composite Number\n");
            break;
        }
    }
    if (i == n)
    {
        printf("It is Prime Number\n");
    }

    return 0;
}
