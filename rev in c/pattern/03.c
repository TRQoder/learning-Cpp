#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of rows :");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n; i++)  //loop for row
    {
        for (int j = 1; j<=a;j++){  //loop for column
            printf("* ");
            
        }
        // a--;
            printf("\n");
    }

    return 0;
}
