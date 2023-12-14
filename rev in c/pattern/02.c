#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of rows :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)  //loop for row
    {
        for (int j = 1; j<=i;j++){  //loop for column
            printf("* ");
            
        }
            printf("\n");
    }

    return 0;
}
